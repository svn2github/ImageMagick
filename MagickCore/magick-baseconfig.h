#ifndef _MAGICKCORE_MAGICK_BASECONFIG_H
#define _MAGICKCORE_MAGICK_BASECONFIG_H 1
 
/* MagickCore/magick-baseconfig.h. Generated automatically at end of configure. */
/* config/config.h.  Generated from config.h.in by configure.  */
/* config/config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define if you have AUTOTRACE library */
/* #undef AUTOTRACE_DELEGATE */

/* Define if coders and filters are to be built as modules. */
/* #undef BUILD_MODULES */

/* Define if you have the bzip2 library */
/* #undef BZLIB_DELEGATE */

/* Define if you have CAIRO library */
/* #undef CAIRO_DELEGATE */

/* permit enciphering and deciphering image pixels */
/* #undef CIPHER_SUPPORT */

/* Define to 1 if the `closedir' function returns void instead of `int'. */
/* #undef CLOSEDIR_VOID */

/* coders subdirectory. */
#ifndef MAGICKCORE_CODER_DIRNAME
#define MAGICKCORE_CODER_DIRNAME "coders"
#endif

/* Directory where architecture-dependent configuration files live. */
#ifndef MAGICKCORE_CONFIGURE_PATH
#define MAGICKCORE_CONFIGURE_PATH "/usr/local/etc/ImageMagick-7/"
#endif

/* Subdirectory of lib where architecture-dependent configuration files live.
   */
#ifndef MAGICKCORE_CONFIGURE_RELATIVE_PATH
#define MAGICKCORE_CONFIGURE_RELATIVE_PATH "ImageMagick-7"
#endif

/* Define if you have DJVU library */
/* #undef DJVU_DELEGATE */

/* Directory where ImageMagick documents live. */
#ifndef MAGICKCORE_DOCUMENTATION_PATH
#define MAGICKCORE_DOCUMENTATION_PATH "/usr/local/share/doc/ImageMagick-7/"
#endif

/* Define if you have Display Postscript */
/* #undef DPS_DELEGATE */

/* exclude deprecated methods in MagickCore API */
/* #undef EXCLUDE_DEPRECATED */

/* Directory where executables are installed. */
#ifndef MAGICKCORE_EXECUTABLE_PATH
#define MAGICKCORE_EXECUTABLE_PATH "/usr/local/bin/"
#endif

/* Define if you have FFTW library */
/* #undef FFTW_DELEGATE */

/* filter subdirectory. */
#ifndef MAGICKCORE_FILTER_DIRNAME
#define MAGICKCORE_FILTER_DIRNAME "filters"
#endif

/* Define if you have FONTCONFIG library */
/* #undef FONTCONFIG_DELEGATE */

/* Define if you have FlashPIX library */
/* #undef FPX_DELEGATE */

/* Define if you have FREETYPE library */
/* #undef FREETYPE_DELEGATE */

/* Define if you have Ghostscript library or framework */
/* #undef GS_DELEGATE */

/* Define if you have GVC library */
/* #undef GVC_DELEGATE */

/* Define to 1 if you have the `acosh' function. */
/* #undef HAVE_ACOSH */

/* Define to 1 if you have the <arm/limits.h> header file. */
/* #undef HAVE_ARM_LIMITS_H */

/* Define to 1 if you have the <arpa/inet.h> header file. */
/* #undef HAVE_ARPA_INET_H */

/* Define to 1 if you have the `asinh' function. */
/* #undef HAVE_ASINH */

/* Define to 1 if you have the `atanh' function. */
/* #undef HAVE_ATANH */

/* Define to 1 if you have the `atexit' function. */
/* #undef HAVE_ATEXIT */

/* Define to 1 if you have the `atoll' function. */
/* #undef HAVE_ATOLL */

/* define if bool is a built-in type */
/* #undef HAVE_BOOL */

/* Define to 1 if you have the `cabs' function. */
/* #undef HAVE_CABS */

/* Define to 1 if you have the `carg' function. */
/* #undef HAVE_CARG */

/* Define to 1 if you have the `cimag' function. */
/* #undef HAVE_CIMAG */

/* Define to 1 if you have the `clock' function. */
/* #undef HAVE_CLOCK */

/* Define to 1 if you have clock_gettime. */
/* #undef HAVE_CLOCK_GETTIME */

/* Define to 1 if clock_gettime supports CLOCK_REALTIME. */
/* #undef HAVE_CLOCK_REALTIME */

/* Define to 1 if you have the <CL/cl.h> header file. */
/* #undef HAVE_CL_CL_H */

/* Define to 1 if you have the <complex.h> header file. */
/* #undef HAVE_COMPLEX_H */

/* Define to 1 if you have the `creal' function. */
/* #undef HAVE_CREAL */

/* Define to 1 if you have the `ctime_r' function. */
/* #undef HAVE_CTIME_R */

/* Define to 1 if you have the declaration of `pread', and to 0 if you don't.
   */
/* #undef HAVE_DECL_PREAD */

/* Define to 1 if you have the declaration of `pwrite', and to 0 if you don't.
   */
/* #undef HAVE_DECL_PWRITE */

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
/* #undef HAVE_DECL_STRERROR_R */

/* Define to 1 if you have the declaration of `strlcpy', and to 0 if you
   don't. */
/* #undef HAVE_DECL_STRLCPY */

/* Define to 1 if you have the declaration of `tzname', and to 0 if you don't.
   */
/* #undef HAVE_DECL_TZNAME */

/* Define to 1 if you have the declaration of `vsnprintf', and to 0 if you
   don't. */
/* #undef HAVE_DECL_VSNPRINTF */

/* Define to 1 if you have the `directio' function. */
/* #undef HAVE_DIRECTIO */

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_DIRENT_H */

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Define to 1 if the system has the type `double_t'. */
/* #undef HAVE_DOUBLE_T */

/* Define to 1 if you have the <errno.h> header file. */
/* #undef HAVE_ERRNO_H */

/* Define to 1 if you have the `execvp' function. */
/* #undef HAVE_EXECVP */

/* Define to 1 if you have the `fchmod' function. */
/* #undef HAVE_FCHMOD */

/* Define to 1 if you have the <fcntl.h> header file. */
/* #undef HAVE_FCNTL_H */

/* Define to 1 if the system has the type `float_t'. */
/* #undef HAVE_FLOAT_T */

/* Define to 1 if you have the `floor' function. */
/* #undef HAVE_FLOOR */

/* Define to 1 if you have the `fork' function. */
/* #undef HAVE_FORK */

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
/* #undef HAVE_FSEEKO */

/* Define to 1 if you have the `ftime' function. */
/* #undef HAVE_FTIME */

/* Define to 1 if you have the `ftruncate' function. */
/* #undef HAVE_FTRUNCATE */

/* Define to 1 if you have the `getcwd' function. */
/* #undef HAVE_GETCWD */

/* Define to 1 if you have the `getc_unlocked' function. */
/* #undef HAVE_GETC_UNLOCKED */

/* Define to 1 if you have the `getdtablesize' function. */
/* #undef HAVE_GETDTABLESIZE */

/* Define to 1 if you have the `getexecname' function. */
/* #undef HAVE_GETEXECNAME */

/* Define to 1 if you have the `getpagesize' function. */
/* #undef HAVE_GETPAGESIZE */

/* Define to 1 if you have the `getpid' function. */
/* #undef HAVE_GETPID */

/* Define to 1 if you have the `getrlimit' function. */
/* #undef HAVE_GETRLIMIT */

/* Define to 1 if you have the `getrusage' function. */
/* #undef HAVE_GETRUSAGE */

/* Define to 1 if you have the `gettimeofday' function. */
/* #undef HAVE_GETTIMEOFDAY */

/* Define to 1 if you have the `gmtime_r' function. */
/* #undef HAVE_GMTIME_R */

/* Compile with hugepage support */
/* #undef HAVE_HUGEPAGES */

/* Define to 1 if the system has the type `intmax_t'. */
/* #undef HAVE_INTMAX_T */

/* Define to 1 if the system has the type `intptr_t'. */
/* #undef HAVE_INTPTR_T */

/* Define to 1 if you have the <inttypes.h> header file. */
/* #undef HAVE_INTTYPES_H */

/* Define to 1 if you have the `isnan' function. */
/* #undef HAVE_ISNAN */

/* Define to 1 if you have the `j0' function. */
/* #undef HAVE_J0 */

/* Define to 1 if you have the `j1' function. */
/* #undef HAVE_J1 */

/* Define if you have the <lcms2.h> header file. */
/* #undef HAVE_LCMS2_H */

/* Define if you have the <lcms2/lcms2.h> header file. */
/* #undef HAVE_LCMS2_LCMS2_H */

/* Define if you have the <lcms.h> header file. */
/* #undef HAVE_LCMS_H */

/* Define if you have the <lcms/lcms.h> header file. */
/* #undef HAVE_LCMS_LCMS_H */

/* Define to 1 if you have the `gcov' library (-lgcov). */
/* #undef HAVE_LIBGCOV */

/* Define to 1 if you have the <limits.h> header file. */
/* #undef HAVE_LIMITS_H */

/* Define to 1 if you have the <linux/unistd.h> header file. */
/* #undef HAVE_LINUX_UNISTD_H */

/* Define to 1 if you have the `lltostr' function. */
/* #undef HAVE_LLTOSTR */

/* Define to 1 if you have the <locale.h> header file. */
/* #undef HAVE_LOCALE_H */

/* Define to 1 if you have the `localtime_r' function. */
/* #undef HAVE_LOCALTIME_R */

/* Define to 1 if the system has the type `long double'. */
/* #undef HAVE_LONG_DOUBLE */

/* Define to 1 if the type `long double' works and has more range or precision
   than `double'. */
/* #undef HAVE_LONG_DOUBLE_WIDER */

/* Define to 1 if the system has the type 'long long int'. */
/* #undef HAVE_LONG_LONG_INT */

/* Define to 1 if you have the `lstat' function. */
/* #undef HAVE_LSTAT */

/* Define to 1 if you have the <machine/param.h> header file. */
/* #undef HAVE_MACHINE_PARAM_H */

/* Define to 1 if you have the <mach-o/dyld.h> header file. */
/* #undef HAVE_MACH_O_DYLD_H */

/* Define to 1 if <wchar.h> declares mbstate_t. */
/* #undef HAVE_MBSTATE_T */

/* Define to 1 if you have the `memmove' function. */
/* #undef HAVE_MEMMOVE */

/* Define to 1 if you have the <memory.h> header file. */
/* #undef HAVE_MEMORY_H */

/* Define to 1 if you have the `memset' function. */
/* #undef HAVE_MEMSET */

/* Define to 1 if you have the `mkstemp' function. */
/* #undef HAVE_MKSTEMP */

/* Define to 1 if you have a working `mmap' system call. */
/* #undef HAVE_MMAP */

/* Define to 1 if you have the `munmap' function. */
/* #undef HAVE_MUNMAP */

/* define if the compiler implements namespaces */
/* #undef HAVE_NAMESPACES */

/* Define if g++ supports namespace std. */
/* #undef HAVE_NAMESPACE_STD */

/* Define to 1 if you have the `nanosleep' function. */
/* #undef HAVE_NANOSLEEP */

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netinet/in.h> header file. */
/* #undef HAVE_NETINET_IN_H */

/* Define to 1 if you have the `newlocale' function. */
/* #undef HAVE_NEWLOCALE */

/* Define to 1 if you have the <OpenCL/cl.h> header file. */
/* #undef HAVE_OPENCL_CL_H */

/* Define to 1 if you have the <OS.h> header file. */
/* #undef HAVE_OS_H */

/* Define to 1 if you have the `pclose' function. */
/* #undef HAVE_PCLOSE */

/* Define to 1 if you have the `poll' function. */
/* #undef HAVE_POLL */

/* Define to 1 if you have the `popen' function. */
/* #undef HAVE_POPEN */

/* Define to 1 if you have the `posix_fadvise' function. */
/* #undef HAVE_POSIX_FADVISE */

/* Define to 1 if you have the `posix_fallocate' function. */
/* #undef HAVE_POSIX_FALLOCATE */

/* Define to 1 if you have the `posix_madvise' function. */
/* #undef HAVE_POSIX_MADVISE */

/* Define to 1 if you have the `posix_memalign' function. */
/* #undef HAVE_POSIX_MEMALIGN */

/* Define to 1 if you have the `posix_spawnp' function. */
/* #undef HAVE_POSIX_SPAWNP */

/* Define to 1 if you have the `pow' function. */
/* #undef HAVE_POW */

/* Define to 1 if you have the `pread' function. */
/* #undef HAVE_PREAD */

/* Define to 1 if you have the <process.h> header file. */
/* #undef HAVE_PROCESS_H */

/* Define if you have POSIX threads libraries and header files. */
#ifndef MAGICKCORE_HAVE_PTHREAD
#define MAGICKCORE_HAVE_PTHREAD 1
#endif

/* Have PTHREAD_PRIO_INHERIT. */
#ifndef MAGICKCORE_HAVE_PTHREAD_PRIO_INHERIT
#define MAGICKCORE_HAVE_PTHREAD_PRIO_INHERIT 1
#endif

/* Define to 1 if you have the `pwrite' function. */
/* #undef HAVE_PWRITE */

/* Define to 1 if you have the `qsort_r' function. */
/* #undef HAVE_QSORT_R */

/* Define to 1 if you have the `raise' function. */
/* #undef HAVE_RAISE */

/* Define to 1 if you have the `rand_r' function. */
/* #undef HAVE_RAND_R */

/* Define to 1 if you have the `readdir_r' function. */
/* #undef HAVE_READDIR_R */

/* Define to 1 if you have the `readlink' function. */
/* #undef HAVE_READLINK */

/* Define to 1 if you have the `realpath' function. */
/* #undef HAVE_REALPATH */

/* Define to 1 if you have the `seekdir' function. */
/* #undef HAVE_SEEKDIR */

/* Define to 1 if you have the `select' function. */
/* #undef HAVE_SELECT */

/* Define to 1 if you have the `setlocale' function. */
/* #undef HAVE_SETLOCALE */

/* Define to 1 if you have the `setvbuf' function. */
/* #undef HAVE_SETVBUF */

/* X11 server supports shape extension */
/* #undef HAVE_SHAPE */

/* X11 server supports shared memory extension */
/* #undef HAVE_SHARED_MEMORY */

/* Define to 1 if you have the `sigaction' function. */
/* #undef HAVE_SIGACTION */

/* Define to 1 if you have the `sigemptyset' function. */
/* #undef HAVE_SIGEMPTYSET */

/* Define to 1 if you have the `socket' function. */
/* #undef HAVE_SOCKET */

/* Define to 1 if you have the `spawnvp' function. */
/* #undef HAVE_SPAWNVP */

/* Define to 1 if you have the `sqrt' function. */
/* #undef HAVE_SQRT */

/* Define to 1 if you have the `stat' function. */
/* #undef HAVE_STAT */

/* Define to 1 if you have the <stdarg.h> header file. */
/* #undef HAVE_STDARG_H */

/* Define to 1 if stdbool.h conforms to C99. */
/* #undef HAVE_STDBOOL_H */

/* Define to 1 if you have the <stdint.h> header file. */
#ifndef MAGICKCORE_HAVE_STDINT_H
#define MAGICKCORE_HAVE_STDINT_H 1
#endif

/* Define to 1 if you have the <stdlib.h> header file. */
#ifndef MAGICKCORE_HAVE_STDLIB_H
#define MAGICKCORE_HAVE_STDLIB_H 1
#endif

/* define if the compiler supports ISO C++ standard library */
/* #undef HAVE_STD_LIBS */

/* Define to 1 if you have the `strcasecmp' function. */
/* #undef HAVE_STRCASECMP */

/* Define to 1 if you have the `strchr' function. */
/* #undef HAVE_STRCHR */

/* Define to 1 if you have the `strcspn' function. */
/* #undef HAVE_STRCSPN */

/* Define to 1 if you have the `strdup' function. */
/* #undef HAVE_STRDUP */

/* Define to 1 if you have the `strerror' function. */
/* #undef HAVE_STRERROR */

/* Define to 1 if you have the `strerror_r' function. */
/* #undef HAVE_STRERROR_R */

/* Define to 1 if cpp supports the ANSI # stringizing operator. */
/* #undef HAVE_STRINGIZE */

/* Define to 1 if you have the <strings.h> header file. */
#ifndef MAGICKCORE_HAVE_STRINGS_H
#define MAGICKCORE_HAVE_STRINGS_H 1
#endif

/* Define to 1 if you have the <string.h> header file. */
#ifndef MAGICKCORE_HAVE_STRING_H
#define MAGICKCORE_HAVE_STRING_H 1
#endif

/* Define to 1 if you have the `strlcat' function. */
/* #undef HAVE_STRLCAT */

/* Define to 1 if you have the `strlcpy' function. */
/* #undef HAVE_STRLCPY */

/* Define to 1 if you have the `strncasecmp' function. */
/* #undef HAVE_STRNCASECMP */

/* Define to 1 if you have the `strpbrk' function. */
/* #undef HAVE_STRPBRK */

/* Define to 1 if you have the `strrchr' function. */
/* #undef HAVE_STRRCHR */

/* Define to 1 if you have the `strspn' function. */
/* #undef HAVE_STRSPN */

/* Define to 1 if you have the `strstr' function. */
/* #undef HAVE_STRSTR */

/* Define to 1 if you have the `strtod' function. */
/* #undef HAVE_STRTOD */

/* Define to 1 if you have the `strtod_l' function. */
/* #undef HAVE_STRTOD_L */

/* Define to 1 if you have the `strtol' function. */
/* #undef HAVE_STRTOL */

/* Define to 1 if you have the `strtoul' function. */
/* #undef HAVE_STRTOUL */

/* Define to 1 if `tm_zone' is a member of `struct tm'. */
/* #undef HAVE_STRUCT_TM_TM_ZONE */

/* Define to 1 if you have the <sun_prefetch.h> header file. */
/* #undef HAVE_SUN_PREFETCH_H */

/* Define to 1 if you have the `symlink' function. */
/* #undef HAVE_SYMLINK */

/* Define to 1 if you have the `sysconf' function. */
/* #undef HAVE_SYSCONF */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/ipc.h> header file. */
/* #undef HAVE_SYS_IPC_H */

/* Define to 1 if you have the <sys/mman.h> header file. */
/* #undef HAVE_SYS_MMAN_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
/* #undef HAVE_SYS_PARAM_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
/* #undef HAVE_SYS_RESOURCE_H */

/* Define to 1 if you have the <sys/select.h> header file. */
/* #undef HAVE_SYS_SELECT_H */

/* Define to 1 if you have the <sys/socket.h> header file. */
/* #undef HAVE_SYS_SOCKET_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
/* #undef HAVE_SYS_STAT_H */

/* Define to 1 if you have the <sys/syslimits.h> header file. */
/* #undef HAVE_SYS_SYSLIMITS_H */

/* Define to 1 if you have the <sys/timeb.h> header file. */
/* #undef HAVE_SYS_TIMEB_H */

/* Define to 1 if you have the <sys/times.h> header file. */
/* #undef HAVE_SYS_TIMES_H */

/* Define to 1 if you have the <sys/time.h> header file. */
/* #undef HAVE_SYS_TIME_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#ifndef MAGICKCORE_HAVE_SYS_TYPES_H
#define MAGICKCORE_HAVE_SYS_TYPES_H 1
#endif

/* Define to 1 if you have the <sys/wait.h> header file. */
/* #undef HAVE_SYS_WAIT_H */

/* Define to 1 if you have the `telldir' function. */
/* #undef HAVE_TELLDIR */

/* Define to 1 if you have the `tempnam' function. */
/* #undef HAVE_TEMPNAM */

/* Define to 1 if you have the <tiffconf.h> header file. */
/* #undef HAVE_TIFFCONF_H */

/* Define to 1 if you have the `TIFFIsBigEndian' function. */
#ifndef MAGICKCORE_HAVE_TIFFISBIGENDIAN
#define MAGICKCORE_HAVE_TIFFISBIGENDIAN 1
#endif

/* Define to 1 if you have the `TIFFIsCODECConfigured' function. */
#ifndef MAGICKCORE_HAVE_TIFFISCODECCONFIGURED
#define MAGICKCORE_HAVE_TIFFISCODECCONFIGURED 1
#endif

/* Define to 1 if you have the `TIFFMergeFieldInfo' function. */
#ifndef MAGICKCORE_HAVE_TIFFMERGEFIELDINFO
#define MAGICKCORE_HAVE_TIFFMERGEFIELDINFO 1
#endif

/* Define to 1 if you have the `TIFFReadEXIFDirectory' function. */
#ifndef MAGICKCORE_HAVE_TIFFREADEXIFDIRECTORY
#define MAGICKCORE_HAVE_TIFFREADEXIFDIRECTORY 1
#endif

/* Define to 1 if you have the `TIFFSetErrorHandlerExt' function. */
#ifndef MAGICKCORE_HAVE_TIFFSETERRORHANDLEREXT
#define MAGICKCORE_HAVE_TIFFSETERRORHANDLEREXT 1
#endif

/* Define to 1 if you have the `TIFFSetTagExtender' function. */
#ifndef MAGICKCORE_HAVE_TIFFSETTAGEXTENDER
#define MAGICKCORE_HAVE_TIFFSETTAGEXTENDER 1
#endif

/* Define to 1 if you have the `TIFFSetWarningHandlerExt' function. */
/* #undef HAVE_TIFFSETWARNINGHANDLEREXT */

/* Define to 1 if you have the `TIFFSwabArrayOfTriples' function. */
#ifndef MAGICKCORE_HAVE_TIFFSWABARRAYOFTRIPLES
#define MAGICKCORE_HAVE_TIFFSWABARRAYOFTRIPLES 1
#endif

/* Define to 1 if you have the `times' function. */
/* #undef HAVE_TIMES */

/* Define to 1 if your `struct tm' has `tm_zone'. Deprecated, use
   `HAVE_STRUCT_TM_TM_ZONE' instead. */
/* #undef HAVE_TM_ZONE */

/* Define to 1 if you don't have `tm_zone' but do have the external array
   `tzname'. */
/* #undef HAVE_TZNAME */

/* Define to 1 if the system has the type `uintmax_t'. */
/* #undef HAVE_UINTMAX_T */

/* Define to 1 if the system has the type `uintptr_t'. */
/* #undef HAVE_UINTPTR_T */

/* Define to 1 if you have the `ulltostr' function. */
/* #undef HAVE_ULLTOSTR */

/* Define to 1 if you have the <unistd.h> header file. */
#ifndef MAGICKCORE_HAVE_UNISTD_H
#define MAGICKCORE_HAVE_UNISTD_H 1
#endif

/* Define to 1 if the system has the type 'unsigned long long int'. */
/* #undef HAVE_UNSIGNED_LONG_LONG_INT */

/* Define to 1 if you have the `uselocale' function. */
/* #undef HAVE_USELOCALE */

/* Define to 1 if you have the `usleep' function. */
/* #undef HAVE_USLEEP */

/* Define to 1 if you have the `utime' function. */
/* #undef HAVE_UTIME */

/* Define to 1 if you have the `vfork' function. */
/* #undef HAVE_VFORK */

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define to 1 if you have the `vfprintf' function. */
/* #undef HAVE_VFPRINTF */

/* Define to 1 if you have the `vfprintf_l' function. */
/* #undef HAVE_VFPRINTF_L */

/* Define to 1 if you have the `vprintf' function. */
/* #undef HAVE_VPRINTF */

/* Define to 1 if you have the `vsnprintf' function. */
/* #undef HAVE_VSNPRINTF */

/* Define to 1 if you have the `vsnprintf_l' function. */
/* #undef HAVE_VSNPRINTF_L */

/* Define to 1 if you have the `vsprintf' function. */
/* #undef HAVE_VSPRINTF */

/* Define to 1 if you have the `waitpid' function. */
/* #undef HAVE_WAITPID */

/* Define to 1 if you have the <wchar.h> header file. */
/* #undef HAVE_WCHAR_H */

/* Define to 1 if you have the <windows.h> header file. */
/* #undef HAVE_WINDOWS_H */

/* Define to 1 if `fork' works. */
/* #undef HAVE_WORKING_FORK */

/* Define to 1 if `vfork' works. */
/* #undef HAVE_WORKING_VFORK */

/* Define to 1 if you have the <xlocale.h> header file. */
/* #undef HAVE_XLOCALE_H */

/* Define to 1 if you have the `_aligned_malloc' function. */
/* #undef HAVE__ALIGNED_MALLOC */

/* Define to 1 if the system has the type `_Bool'. */
/* #undef HAVE__BOOL */

/* Define to 1 if you have the `_exit' function. */
/* #undef HAVE__EXIT */

/* Define to 1 if you have the `_NSGetExecutablePath' function. */
/* #undef HAVE__NSGETEXECUTABLEPATH */

/* Define to 1 if you have the `_pclose' function. */
/* #undef HAVE__PCLOSE */

/* Define to 1 if you have the `_popen' function. */
/* #undef HAVE__POPEN */

/* Define to 1 if you have the `_wfopen' function. */
/* #undef HAVE__WFOPEN */

/* Define to 1 if you have the `_wstat' function. */
/* #undef HAVE__WSTAT */

/* define if your compiler has __attribute__ */
#ifndef MAGICKCORE_HAVE___ATTRIBUTE__
#define MAGICKCORE_HAVE___ATTRIBUTE__ 1
#endif

/* Whether hdri is enabled or not */
/* #undef HDRI_ENABLE_OBSOLETE_IN_H */

/* Define if you have umem memory allocation library */
/* #undef HasUMEM */

/* Directory where ImageMagick architecture headers live. */
#ifndef MAGICKCORE_INCLUDEARCH_PATH
#define MAGICKCORE_INCLUDEARCH_PATH "/usr/local/include/ImageMagick-7/"
#endif

/* Directory where ImageMagick headers live. */
#ifndef MAGICKCORE_INCLUDE_PATH
#define MAGICKCORE_INCLUDE_PATH "/usr/local/include/ImageMagick-7/"
#endif

/* ImageMagick is formally installed under prefix */
/* #undef INSTALLED_SUPPORT */

/* Define if you have JBIG library */
/* #undef JBIG_DELEGATE */

/* Define if you have JPEG library */
/* #undef JPEG_DELEGATE */

/* Define if you have LCMS (v1.11 or later) library */
/* #undef LCMS_DELEGATE */

/* Define if you have OPENJP2 library */
/* #undef LIBOPENJP2_DELEGATE */

/* Directory where architecture-dependent files live. */
#ifndef MAGICKCORE_LIBRARY_PATH
#define MAGICKCORE_LIBRARY_PATH "/usr/local/lib/ImageMagick-7.0.0/"
#endif

/* Subdirectory of lib where ImageMagick architecture dependent files are
   installed. */
#ifndef MAGICKCORE_LIBRARY_RELATIVE_PATH
#define MAGICKCORE_LIBRARY_RELATIVE_PATH "ImageMagick-7.0.0"
#endif

/* Binaries in libraries path base name (will be during install linked to bin)
   */
#ifndef MAGICKCORE_LIB_BIN_BASEDIRNAME
#define MAGICKCORE_LIB_BIN_BASEDIRNAME "bin"
#endif

/* Define if you have LQR library */
/* #undef LQR_DELEGATE */

/* Define if using libltdl to support dynamically loadable modules */
/* #undef LTDL_DELEGATE */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
/* #undef LT_OBJDIR */

/* Define if you have LZMA library */
/* #undef LZMA_DELEGATE */

/* Define to prepend to default font search path. */
/* #undef MAGICK_FONT_PATH */

/* Target Host CPU */
#ifndef MAGICKCORE_MAGICK_TARGET_CPU
#define MAGICKCORE_MAGICK_TARGET_CPU x86_64
#endif

/* Target Host OS */
#ifndef MAGICKCORE_MAGICK_TARGET_OS
#define MAGICKCORE_MAGICK_TARGET_OS linux-gnu
#endif

/* Target Host Vendor */
#ifndef MAGICKCORE_MAGICK_TARGET_VENDOR
#define MAGICKCORE_MAGICK_TARGET_VENDOR unknown
#endif

/* Module directory name without ABI part. */
#ifndef MAGICKCORE_MODULES_BASEDIRNAME
#define MAGICKCORE_MODULES_BASEDIRNAME "modules"
#endif

/* Module directory dirname */
/* #undef MODULES_DIRNAME */

/* Magick API method prefix */
/* #undef NAMESPACE_PREFIX */

/* Define to 1 if assertions should be disabled. */
/* #undef NDEBUG */

/* Define if you have OPENEXR library */
/* #undef OPENEXR_DELEGATE */

/* Name of package */
#ifndef MAGICKCORE_PACKAGE
#define MAGICKCORE_PACKAGE "ImageMagick"
#endif

/* Define to the address where bug reports for this package should be sent. */
#ifndef MAGICKCORE_PACKAGE_BUGREPORT
#define MAGICKCORE_PACKAGE_BUGREPORT "http://www.imagemagick.org"
#endif

/* Define to the full name of this package. */
#ifndef MAGICKCORE_PACKAGE_NAME
#define MAGICKCORE_PACKAGE_NAME "ImageMagick"
#endif

/* Define to the full name and version of this package. */
#ifndef MAGICKCORE_PACKAGE_STRING
#define MAGICKCORE_PACKAGE_STRING "ImageMagick 7.0.0-0"
#endif

/* Define to the one symbol short name of this package. */
#ifndef MAGICKCORE_PACKAGE_TARNAME
#define MAGICKCORE_PACKAGE_TARNAME "ImageMagick"
#endif

/* Define to the home page for this package. */
#ifndef MAGICKCORE_PACKAGE_URL
#define MAGICKCORE_PACKAGE_URL ""
#endif

/* Define to the version of this package. */
#ifndef MAGICKCORE_PACKAGE_VERSION
#define MAGICKCORE_PACKAGE_VERSION "7.0.0-0"
#endif

/* Define if you have PANGOCAIRO library */
/* #undef PANGOCAIRO_DELEGATE */

/* Define if you have PANGO library */
/* #undef PANGO_DELEGATE */

/* Define if you have PNG library */
/* #undef PNG_DELEGATE */

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Pixel cache threshold in MB (defaults to available memory) */
/* #undef PixelCacheThreshold */

/* Number of bits in a pixel Quantum (8/16/32/64) */
/* #undef QUANTUM_DEPTH_OBSOLETE_IN_H */

/* Define as the return type of signal handlers (`int' or `void'). */
/* #undef RETSIGTYPE */

/* Define if you have RSVG library */
/* #undef RSVG_DELEGATE */

/* Define to the type of arg 1 for `select'. */
/* #undef SELECT_TYPE_ARG1 */

/* Define to the type of args 2, 3 and 4 for `select'. */
/* #undef SELECT_TYPE_ARG234 */

/* Define to the type of arg 5 for `select'. */
/* #undef SELECT_TYPE_ARG5 */

/* Sharearch directory name without ABI part. */
#ifndef MAGICKCORE_SHAREARCH_BASEDIRNAME
#define MAGICKCORE_SHAREARCH_BASEDIRNAME "config"
#endif

/* Sharearch directory dirname */
/* #undef SHAREARCH_DIRNAME */

/* Directory where architecture-independent configuration files live. */
#ifndef MAGICKCORE_SHARE_PATH
#define MAGICKCORE_SHARE_PATH "/usr/local/share/ImageMagick-7/"
#endif

/* Subdirectory of lib where architecture-independent configuration files
   live. */
#ifndef MAGICKCORE_SHARE_RELATIVE_PATH
#define MAGICKCORE_SHARE_RELATIVE_PATH "ImageMagick-7"
#endif

/* The size of `double', as computed by sizeof. */
/* #undef SIZEOF_DOUBLE */

/* The size of `double_t', as computed by sizeof. */
/* #undef SIZEOF_DOUBLE_T */

/* The size of `float', as computed by sizeof. */
/* #undef SIZEOF_FLOAT */

/* The size of `float_t', as computed by sizeof. */
/* #undef SIZEOF_FLOAT_T */

/* The size of `long double', as computed by sizeof. */
/* #undef SIZEOF_LONG_DOUBLE */

/* The size of `off_t', as computed by sizeof. */
/* #undef SIZEOF_OFF_T */

/* The size of `signed int', as computed by sizeof. */
/* #undef SIZEOF_SIGNED_INT */

/* The size of `signed long', as computed by sizeof. */
/* #undef SIZEOF_SIGNED_LONG */

/* The size of `signed long long', as computed by sizeof. */
/* #undef SIZEOF_SIGNED_LONG_LONG */

/* The size of `signed short', as computed by sizeof. */
/* #undef SIZEOF_SIGNED_SHORT */

/* The size of `size_t', as computed by sizeof. */
#ifndef MAGICKCORE_SIZEOF_SIZE_T
#define MAGICKCORE_SIZEOF_SIZE_T 8
#endif

/* The size of `ssize_t', as computed by sizeof. */
/* #undef SIZEOF_SSIZE_T */

/* The size of `unsigned int', as computed by sizeof. */
/* #undef SIZEOF_UNSIGNED_INT */

/* The size of `unsigned int*', as computed by sizeof. */
/* #undef SIZEOF_UNSIGNED_INTP */

/* The size of `unsigned long', as computed by sizeof. */
/* #undef SIZEOF_UNSIGNED_LONG */

/* The size of `unsigned long long', as computed by sizeof. */
/* #undef SIZEOF_UNSIGNED_LONG_LONG */

/* The size of `unsigned short', as computed by sizeof. */
/* #undef SIZEOF_UNSIGNED_SHORT */

/* Define to 1 if the `S_IS*' macros in <sys/stat.h> do not work properly. */
/* #undef STAT_MACROS_BROKEN */

/* Define to 1 if you have the ANSI C header files. */
/* #undef STDC_HEADERS */

/* Define to 1 if strerror_r returns char *. */
/* #undef STRERROR_R_CHAR_P */

/* Define if you have POSIX threads libraries and header files. */
#ifndef MAGICKCORE_THREAD_SUPPORT
#define MAGICKCORE_THREAD_SUPPORT 1
#endif

/* Define if you have TIFF library */
/* #undef TIFF_DELEGATE */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
/* #undef TIME_WITH_SYS_TIME */

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version number of package */
#ifndef MAGICKCORE_VERSION
#define MAGICKCORE_VERSION "7.0.0-0"
#endif

/* Define if you have WEBP library */
#ifndef MAGICKCORE_WEBP_DELEGATE
#define MAGICKCORE_WEBP_DELEGATE 1
#endif

/* Define to use the Windows GDI32 library */
/* #undef WINGDI32_DELEGATE */

/* Define if using the dmalloc debugging malloc package */
/* #undef WITH_DMALLOC */

/* Define if you have wmflite library */
/* #undef WMFLITE_DELEGATE */

/* Define if you have wmf library */
/* #undef WMF_DELEGATE */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Location of X11 configure files */
/* #undef X11_CONFIGURE_PATH */

/* Define if you have X11 library */
/* #undef X11_DELEGATE */

/* Define if you have XML library */
/* #undef XML_DELEGATE */

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

/* Build self-contained, embeddable, zero-configuration ImageMagick */
/* #undef ZERO_CONFIGURATION_SUPPORT */

/* Define if you have zlib compression library */
/* #undef ZLIB_DELEGATE */

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* enable run-time bounds-checking */
/* #undef _FORTIFY_SOURCE */

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
/* #undef _LARGEFILE_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define this for the OpenCL Accelerator */
/* #undef _OPENCL */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define for Solaris 2.5.1 so the uint32_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT32_T */

/* Define for Solaris 2.5.1 so the uint64_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT64_T */

/* Define for Solaris 2.5.1 so the uint8_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT8_T */

/* Define to 1 if type `char' is unsigned and you are not using gcc.  */
#ifndef __CHAR_UNSIGNED__
/* # undef __CHAR_UNSIGNED__ */
#endif

/* Define to appropriate substitue if compiler does not have __func__ */
/* #undef __func__ */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to the type of a signed integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int16_t */

/* Define to the type of a signed integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int32_t */

/* Define to the type of a signed integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int64_t */

/* Define to the type of a signed integer type of width exactly 8 bits if such
   a type exists and the standard includes do not define it. */
/* #undef int8_t */

/* Define to the widest signed integer type if <stdint.h> and <inttypes.h> do
   not define. */
/* #undef intmax_t */

/* Define to the type of a signed integer type wide enough to hold a pointer,
   if such a type exists, and if the system does not define it. */
/* #undef intptr_t */

/* Define to a type if <wchar.h> does not define. */
/* #undef mbstate_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
/* #undef restrict */
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef ssize_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* Define to the type of an unsigned integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint16_t */

/* Define to the type of an unsigned integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint32_t */

/* Define to the type of an unsigned integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint64_t */

/* Define to the type of an unsigned integer type of width exactly 8 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint8_t */

/* Define to the widest unsigned integer type if <stdint.h> and <inttypes.h>
   do not define. */
/* #undef uintmax_t */

/* Define to the type of an unsigned integer type wide enough to hold a
   pointer, if such a type exists, and if the system does not define it. */
/* #undef uintptr_t */

/* Define as `fork' if `vfork' does not work. */
/* #undef vfork */

/* Define to empty if the keyword `volatile' does not work. Warning: valid
   code using `volatile' can become incorrect without. Disable with care. */
/* #undef volatile */
 
/* once: _MAGICKCORE_MAGICK_BASECONFIG_H */
#endif
