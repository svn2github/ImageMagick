#!/bin/sh
#
#  Copyright 1999-2012 ImageMagick Studio LLC, a non-profit organization
#  dedicated to making software imaging solutions freely available.
#
#  You may not use this file except in compliance with the License.  You may
#  obtain a copy of the License at
#
#    http://www.imagemagick.org/script/license.php
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.
#
. ${srcdir}/tests/common.sh

depth=`eval ${MAGICK} xc:none -format '%[fx:QuantumRange]' info:-`
if [ "X$depth" == "X255" ]; then
  exit 0
fi

# how to generate a one pixel (average rose) color and output its values
in="rose: -scale 1x1"    # a one pixel image of the average color.
out="-format '%[fx:int(255*r+.5)],%[fx:int(255*g+.5)],%[fx:int(255*b+.5)]' info:-"

# ----------------

# Colors to compare results to.
error=false
average=`eval ${MAGICK} "$in" -noop "$out"`
too_dark=`eval ${MAGICK} "$in" -colorspace RGB "$out"`
too_light=`eval ${MAGICK} "$in" -set colorspace RGB -colorspace sRGB "$out"`
format='%-30s%s\n'        # results formating
format2='%-30s%-14s%s\n'

printf "$format2" "Average \"rose:\" Color"  "$average" "sRGB(rose)"
printf "$format2" "Too Dark Color"  "$too_dark"  "sRGB(rose)->RGB result"
printf "$format2" "Too Light Color" "$too_light" "RGB(rose)->sRGB result"
echo ''

#
# Sanity checks
#
# NOTE: as a extra validation on sanity checks below...
#    eval ${MAGICK} "$in" -gamma .454545 "$out"
# produces a value of  74,25,20   which is close to 17,3,2 below.
#    eval ${MAGICK} "$in" -gamma 2.2 "$out"
# produces a value of  198,158,151  whcih is close to 229,207,203 below.
#
# Actual values used below come from IM v6.5.4-7 colorspace conversions
#
if [ "X$average" != "X146,89,80" ]; then
  echo "Sanity Failure: Average expected to be 145,89,80 - ABORTING"
  error=true
fi
if [ "X$too_dark" != "X17,3,2" ]; then
  echo "Sanity Failure: Too Dark expected to be 17,3,2 - ABORTING"
  error=true
fi
if [ "X$too_light" != "X229,207,203" ]; then
  echo "Sanity Failure: Too Light expected to be 199,159,152 - ABORTING"
  error=true
fi
$error && exit 1

test_color() {
  test="sRGB"
  cs='';
  for i in "$@"; do
    test="${test}->$i"        # format of the test being performed
    cs="$cs -colorspace $i"   # colorspace operations to perform test
  done
  color=`eval ${MAGICK} "$in" $cs "$out"`

  if [ "X$color" = "X$average" ]; then
    printf "$format" "$test" "good"
    return
  fi
  error=false
  if [ "X$color" = "X$too_light" ]; then
    printf "$format" "$test" "TOO_LIGHT"
    error=true
    return
  fi
  if [ "X$color" = "X$too_dark" ]; then
    printf "$format" "$test" "TOO_DARK"
    error=true
    return
  fi
  printf "$format" "$test" "UNKNOWN COLOR (expect $average, got $color)"
}

# ----------------

test_color RGB     sRGB  # round trip (parts tested above)

test_color XYZ     sRGB
test_color XYZ RGB sRGB
test_color RGB XYZ sRGB

test_color LAB     sRGB
test_color XYZ LAB sRGB
test_color LAB XYZ sRGB
test_color RGB LAB sRGB
test_color LAB RGB sRGB

test_color CMY   sRGB
test_color CMYK  sRGB
test_color HSL   sRGB
test_color HSB   sRGB
test_color HWB   sRGB
test_color Log   sRGB
test_color YIQ   sRGB
test_color YUV   sRGB
test_color YCbCr sRGB
test_color OHTA  sRGB

$error && exit 1 # return the overall error result
exit 0
