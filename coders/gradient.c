/*
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                                                                             %
%                                                                             %
%                                                                             %
%            GGGG  RRRR    AAA   DDDD   IIIII  EEEEE  N   N  TTTTT            %
%           G      R   R  A   A  D   D    I    E      NN  N    T              %
%           G  GG  RRRR   AAAAA  D   D    I    EEE    N N N    T              %
%           G   G  R R    A   A  D   D    I    E      N  NN    T              %
%            GGG   R  R   A   A  DDDD   IIIII  EEEEE  N   N    T              %
%                                                                             %
%                                                                             %
%                   Read An Image Filled Using Gradient.                      %
%                                                                             %
%                              Software Design                                %
%                                   Cristy                                    %
%                                 July 1992                                   %
%                                                                             %
%                                                                             %
%  Copyright 1999-2015 ImageMagick Studio LLC, a non-profit organization      %
%  dedicated to making software imaging solutions freely available.           %
%                                                                             %
%  You may not use this file except in compliance with the License.  You may  %
%  obtain a copy of the License at                                            %
%                                                                             %
%    http://www.imagemagick.org/script/license.php                            %
%                                                                             %
%  Unless required by applicable law or agreed to in writing, software        %
%  distributed under the License is distributed on an "AS IS" BASIS,          %
%  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   %
%  See the License for the specific language governing permissions and        %
%  limitations under the License.                                             %
%                                                                             %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%
*/

/*
  Include declarations.
*/
#include "MagickCore/studio.h"
#include "MagickCore/attribute.h"
#include "MagickCore/blob.h"
#include "MagickCore/blob-private.h"
#include "MagickCore/channel.h"
#include "MagickCore/color.h"
#include "MagickCore/color-private.h"
#include "MagickCore/colorspace-private.h"
#include "MagickCore/constitute.h"
#include "MagickCore/draw.h"
#include "MagickCore/exception.h"
#include "MagickCore/exception-private.h"
#include "MagickCore/image.h"
#include "MagickCore/image-private.h"
#include "MagickCore/list.h"
#include "MagickCore/magick.h"
#include "MagickCore/memory_.h"
#include "MagickCore/paint.h"
#include "MagickCore/pixel-accessor.h"
#include "MagickCore/quantum-private.h"
#include "MagickCore/static.h"
#include "MagickCore/string_.h"
#include "MagickCore/module.h"
#include "MagickCore/studio.h"

/*
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                                                                             %
%                                                                             %
%                                                                             %
%   R e a d G R A D I E N T I m a g e                                         %
%                                                                             %
%                                                                             %
%                                                                             %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%  ReadGRADIENTImage creates a gradient image and initializes it to
%  the color range as specified by the filename.  It allocates the memory
%  necessary for the new Image structure and returns a pointer to the new
%  image.
%
%  The format of the ReadGRADIENTImage method is:
%
%      Image *ReadGRADIENTImage(const ImageInfo *image_info,
%        ExceptionInfo *exception)
%
%  A description of each parameter follows:
%
%    o image_info: the image info.
%
%    o exception: return any errors or warnings in this structure.
%
*/
static Image *ReadGRADIENTImage(const ImageInfo *image_info,
  ExceptionInfo *exception)
{
  char
    colorname[MaxTextExtent];

  Image
    *image;

  ImageInfo
    *read_info;

  MagickBooleanType
    icc_color,
    status;

  PixelInfo
    start_color,
    stop_color;

  /*
    Initialize Image structure.
  */
  assert(image_info != (const ImageInfo *) NULL);
  assert(image_info->signature == MagickSignature);
  if (image_info->debug != MagickFalse)
    (void) LogMagickEvent(TraceEvent,GetMagickModule(),"%s",
      image_info->filename);
  assert(exception != (ExceptionInfo *) NULL);
  assert(exception->signature == MagickSignature);
  read_info=CloneImageInfo(image_info);
  SetImageInfoBlob(read_info,(void *) NULL,0);
  (void) CopyMagickString(colorname,image_info->filename,MaxTextExtent);
  (void) sscanf(image_info->filename,"%[^-]",colorname);
  (void) FormatLocaleString(read_info->filename,MaxTextExtent,"xc:%s",
    colorname);
  image=ReadImage(read_info,exception);
  read_info=DestroyImageInfo(read_info);
  if (image == (Image *) NULL)
    return((Image *) NULL);
  (void) SetImageAlpha(image,(Quantum) TransparentAlpha,exception);
  (void) CopyMagickString(image->filename,image_info->filename,MaxTextExtent);
  icc_color=MagickFalse;
  if (LocaleCompare(colorname,"icc") == 0)
    {
      (void) ConcatenateMagickString(colorname,"-",MaxTextExtent);
      (void) sscanf(image_info->filename,"%*[^-]-%[^-]",colorname+4);
      icc_color=MagickTrue;
    }
  status=QueryColorCompliance(colorname,AllCompliance,&start_color,exception);
  if (status == MagickFalse)
    {
      image=DestroyImage(image);
      return((Image *) NULL);
    }
  (void) SetImageColorspace(image,start_color.colorspace,exception);
  (void) CopyMagickString(colorname,"white",MaxTextExtent);
  if (GetPixelInfoIntensity(image,&start_color) > (Quantum) (QuantumRange/2))
    (void) CopyMagickString(colorname,"black",MaxTextExtent);
  if (icc_color == MagickFalse)
    (void) sscanf(image_info->filename,"%*[^-]-%[^-]",colorname);
  else
    (void) sscanf(image_info->filename,"%*[^-]-%*[^-]-%[^-]",colorname);
  status=QueryColorCompliance(colorname,AllCompliance,&stop_color,exception);
  if (status == MagickFalse)
    {
      image=DestroyImage(image);
      return((Image *) NULL);
    }
  image->alpha_trait=start_color.alpha_trait;
  if (stop_color.alpha_trait != UndefinedPixelTrait)
    image->alpha_trait=stop_color.alpha_trait;
  status=GradientImage(image,LocaleCompare(image_info->magick,"GRADIENT") == 0 ?
    LinearGradient : RadialGradient,PadSpread,&start_color,&stop_color,
    exception);
  if (status == MagickFalse)
    {
      image=DestroyImageList(image);
      return((Image *) NULL);
    }
  return(GetFirstImageInList(image));
}

/*
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                                                                             %
%                                                                             %
%                                                                             %
%   R e g i s t e r G R A D I E N T I m a g e                                 %
%                                                                             %
%                                                                             %
%                                                                             %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%  RegisterGRADIENTImage() adds attributes for the GRADIENT image format
%  to the list of supported formats.  The attributes include the image format
%  tag, a method to read and/or write the format, whether the format
%  supports the saving of more than one frame to the same file or blob,
%  whether the format supports native in-memory I/O, and a brief
%  description of the format.
%
%  The format of the RegisterGRADIENTImage method is:
%
%      size_t RegisterGRADIENTImage(void)
%
*/
ModuleExport size_t RegisterGRADIENTImage(void)
{
  MagickInfo
    *entry;

  entry=SetMagickInfo("GRADIENT");
  entry->decoder=(DecodeImageHandler *) ReadGRADIENTImage;
  entry->adjoin=MagickFalse;
  entry->raw=MagickTrue;
  entry->format_type=ImplicitFormatType;
  entry->description=ConstantString("Gradual linear passing from one shade to "
    "another");
  entry->module=ConstantString("GRADIENT");
  (void) RegisterMagickInfo(entry);
  entry=SetMagickInfo("RADIAL-GRADIENT");
  entry->decoder=(DecodeImageHandler *) ReadGRADIENTImage;
  entry->adjoin=MagickFalse;
  entry->raw=MagickTrue;
  entry->format_type=ImplicitFormatType;
  entry->description=ConstantString("Gradual radial passing from one shade to "
    "another");
  entry->module=ConstantString("GRADIENT");
  (void) RegisterMagickInfo(entry);
  return(MagickImageCoderSignature);
}

/*
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                                                                             %
%                                                                             %
%                                                                             %
%   U n r e g i s t e r G R A D I E N T I m a g e                             %
%                                                                             %
%                                                                             %
%                                                                             %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
%  UnregisterGRADIENTImage() removes format registrations made by the
%  GRADIENT module from the list of supported formats.
%
%  The format of the UnregisterGRADIENTImage method is:
%
%      UnregisterGRADIENTImage(void)
%
*/
ModuleExport void UnregisterGRADIENTImage(void)
{
  (void) UnregisterMagickInfo("RADIAL-GRADIENT");
  (void) UnregisterMagickInfo("GRADIENT");
}
