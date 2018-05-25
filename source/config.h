/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if you want to disable the SIMD CPU instruction test */
/* #undef DISABLE_SIMD_TEST */

/* always defined to indicate that i18n is enabled */
/* #undef ENABLE_NLS */

/* The package name, for gettext */
#define GETTEXT_PACKAGE "gnubg"

/* Define if you want to disable deprecated gtk functions */
/* #undef GTK_DISABLE_DEPRECATED */

/* Define if you want to disable deprecated glib functions */
/* #undef G_DISABLE_DEPRECATED */

/* Define to 1 to support Advanced Bit Manipulation */
#define HAVE_ABM 1

/* Define to 1 to support Multi-Precision Add-Carry Instruction Extensions */
/* #undef HAVE_ADX */

/* Define to 1 to support Advanced Encryption Standard New Instruction Set
   (AES-NI) */
#define HAVE_AES 1

/* Support Altivec instructions */
/* #undef HAVE_ALTIVEC */

/* Define if you have Apple CoreAudio */
/* #undef HAVE_APPLE_COREAUDIO */

/* Define if you have Apple QuickTime */
/* #undef HAVE_APPLE_QUICKTIME */

/* Define to 1 to support Advanced Vector Extensions */
#define HAVE_AVX 1

/* Define to 1 to support Advanced Vector Extensions 2 */
#define HAVE_AVX2 1

/* Define to 1 to support AVX-512 Byte and Word Instructions */
/* #undef HAVE_AVX512_BW */

/* Define to 1 to support AVX-512 Conflict Detection Instructions */
/* #undef HAVE_AVX512_CD */

/* Define to 1 to support AVX-512 Doubleword and Quadword Instructions */
/* #undef HAVE_AVX512_DQ */

/* Define to 1 to support AVX-512 Exponential & Reciprocal Instructions */
/* #undef HAVE_AVX512_ER */

/* Define to 1 to support AVX-512 Foundation Extensions */
/* #undef HAVE_AVX512_F */

/* Define to 1 to support AVX-512 Integer Fused Multiply Add Instructions */
/* #undef HAVE_AVX512_IFMA */

/* Define to 1 to support AVX-512 Conflict Prefetch Instructions */
/* #undef HAVE_AVX512_PF */

/* Define to 1 to support AVX-512 Vector Byte Manipulation Instructions */
/* #undef HAVE_AVX512_VBMI */

/* Define to 1 to support AVX-512 Vector Length Extensions */
/* #undef HAVE_AVX512_VL */

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
#define HAVE_BIND_TEXTDOMAIN_CODESET 1

/* Define to 1 to support Bit Manipulation Instruction Set 1 */
/* #undef HAVE_BMI1 */

/* Define to 1 to support Bit Manipulation Instruction Set 2 */
/* #undef HAVE_BMI2 */

/* Define if you want to use libcairo */
/* #undef HAVE_CAIRO */

/* Define if you want to use gstreamer */
/* #undef HAVE_CANBERRA */

/* Define to 1 if you have the `dcgettext' function. */
/* #undef HAVE_DCGETTEXT */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 to support Fused Multiply-Add Extensions 3 */
/* #undef HAVE_FMA3 */

/* Define to 1 to support Fused Multiply-Add Extensions 4 */
/* #undef HAVE_FMA4 */

/* Define if you have freetype2 */
/* #undef HAVE_FREETYPE */

/* Define to 1 if the system has the `format' function attribute */
#define HAVE_FUNC_ATTRIBUTE_FORMAT 1

/* Define to 1 if the system has the `returns_nonnull' function attribute */
#define HAVE_FUNC_ATTRIBUTE_RETURNS_NONNULL 1

/* Define to 1 if the system has the `unused' function attribute */
#define HAVE_FUNC_ATTRIBUTE_UNUSED 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to 1 if you have the <GL/glx.h> header file. */
/* #undef HAVE_GL_GLX_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if your <locale.h> file defines LC_MESSAGES. */
#define HAVE_LC_MESSAGES 1

/* Define to 1 if you have a functional curl library. */
/* #undef HAVE_LIBCURL */

/* Define if you have libgmp */
/* #undef HAVE_LIBGMP */

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define if you have libpng */
/* #undef HAVE_LIBPNG */

/* Define if you have libreadline */
/* #undef HAVE_LIB_READLINE */

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the <mcheck.h> header file. */
#define HAVE_MCHECK_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 to support Multimedia Extensions */
#define HAVE_MMX 1

/* Define to 1 to support Memory Protection Extensions */
/* #undef HAVE_MPX */

/* Define to 1 if you have the `mtrace' function. */
#define HAVE_MTRACE 1

/* Support NEON instructions */
/* #undef HAVE_NEON */

/* Define if you want to use pangocairo */
/* #undef HAVE_PANGOCAIRO */

/* Define to 1 to support Prefetch Vector Data Into Caches WT1 */
/* #undef HAVE_PREFETCHWT1 */

/* If available, contains the Python version number currently in use. */
#define HAVE_PYTHON "2.7"

/* Define to 1 to support Digital Random Number Generator */
#define HAVE_RDRND 1

/* Define to 1 if you have the `setpriority' function. */
#define HAVE_SETPRIORITY 1

/* Define to 1 to support Secure Hash Algorithm Extension */
/* #undef HAVE_SHA */

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the `sigvec' function. */
/* #undef HAVE_SIGVEC */

/* Define if the system supports AF_LOCAL sockets. */
#define HAVE_SOCKETS 1

/* Define to 1 to support Streaming SIMD Extensions */
#define HAVE_SSE 1

/* Define to 1 to support Streaming SIMD Extensions */
#define HAVE_SSE2 1

/* Define to 1 to support Streaming SIMD Extensions 3 */
#define HAVE_SSE3 1

/* Define to 1 to support Streaming SIMD Extensions 4.1 */
#define HAVE_SSE4_1 1

/* Define to 1 to support Streaming SIMD Extensions 4.2 */
#define HAVE_SSE4_2 1

/* Define to 1 to support AMD Streaming SIMD Extensions 4a */
/* #undef HAVE_SSE4a */

/* Define to 1 to support Supplemental Streaming SIMD Extensions 3 */
#define HAVE_SSSE3 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strptime' function. */
#define HAVE_STRPTIME 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Support VSX instructions */
/* #undef HAVE_VSX */

/* Define to 1 to support eXtended Operations Extensions */
/* #undef HAVE_XOP */

/* define if your compiler has __attribute__ */
#define HAVE___ATTRIBUTE__ 1

/* Define to 1 if the system has the `__builtin_clz' built-in function */
#define HAVE___BUILTIN_CLZ 1

/* Define to 1 if the system has the `__builtin_expect' built-in function */
#define HAVE___BUILTIN_EXPECT 1

/* Defined if libcurl supports AsynchDNS */
/* #undef LIBCURL_FEATURE_ASYNCHDNS */

/* Defined if libcurl supports IDN */
/* #undef LIBCURL_FEATURE_IDN */

/* Defined if libcurl supports IPv6 */
/* #undef LIBCURL_FEATURE_IPV6 */

/* Defined if libcurl supports KRB4 */
/* #undef LIBCURL_FEATURE_KRB4 */

/* Defined if libcurl supports libz */
/* #undef LIBCURL_FEATURE_LIBZ */

/* Defined if libcurl supports NTLM */
/* #undef LIBCURL_FEATURE_NTLM */

/* Defined if libcurl supports SSL */
/* #undef LIBCURL_FEATURE_SSL */

/* Defined if libcurl supports SSPI */
/* #undef LIBCURL_FEATURE_SSPI */

/* Defined if libcurl supports DICT */
/* #undef LIBCURL_PROTOCOL_DICT */

/* Defined if libcurl supports FILE */
/* #undef LIBCURL_PROTOCOL_FILE */

/* Defined if libcurl supports FTP */
/* #undef LIBCURL_PROTOCOL_FTP */

/* Defined if libcurl supports FTPS */
/* #undef LIBCURL_PROTOCOL_FTPS */

/* Defined if libcurl supports HTTP */
/* #undef LIBCURL_PROTOCOL_HTTP */

/* Defined if libcurl supports HTTPS */
/* #undef LIBCURL_PROTOCOL_HTTPS */

/* Defined if libcurl supports IMAP */
/* #undef LIBCURL_PROTOCOL_IMAP */

/* Defined if libcurl supports LDAP */
/* #undef LIBCURL_PROTOCOL_LDAP */

/* Defined if libcurl supports POP3 */
/* #undef LIBCURL_PROTOCOL_POP3 */

/* Defined if libcurl supports RTSP */
/* #undef LIBCURL_PROTOCOL_RTSP */

/* Defined if libcurl supports SMTP */
/* #undef LIBCURL_PROTOCOL_SMTP */

/* Defined if libcurl supports TELNET */
/* #undef LIBCURL_PROTOCOL_TELNET */

/* Defined if libcurl supports TFTP */
/* #undef LIBCURL_PROTOCOL_TFTP */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* maximum number of evaluation threads */
/* #undef MAX_NUMTHREADS */

/* program to open URLs */
#define OPEN_URL_PROG "sensible-browser"

/* Name of package */
#define PACKAGE "gnubg"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "bug-gnubg@gnu.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "GNU Backgammon"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "GNU Backgammon 1.06.001"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "gnubg"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://www.gnu.org/software/gnubg/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.06.001"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define if using Apple OpenGL */
/* #undef USE_APPLE_OPENGL */

/* Define if you want to compile with AVX support */
#define USE_AVX 1

/* Define if you want to use the 3D boards */
/* #undef USE_BOARD3D */

/* Define if you want to compile with FMA3 support */
/* #undef USE_FMA3 */

/* Define if you want to use GResource to load images */
/* #undef USE_GRESOURCE */

/* Define if you want to use the gtk gui */
/* #undef USE_GTK */

/* Define if you want to have multithread support */
#define USE_MULTITHREAD 1

/* Define if you want to compile with NEON support */
/* #undef USE_NEON */

/* Define if you want to use Python inside gnubg */
#define USE_PYTHON 1

/* Define if you want to compile with SIMD support */
#define USE_SIMD_INSTRUCTIONS 1

/* Define if you want to use sqlite */
/* #undef USE_SQLITE */

/* Define if you want to compile with SSE2 support */
/* #undef USE_SSE2 */

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
#define VERSION "1.06.001"

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define curl_free() as free() if our version of curl lacks curl_free. */
/* #undef curl_free */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */
