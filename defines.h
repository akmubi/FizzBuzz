/* Things I use in my C projects (compatible with C89) */
#if !defined(___DEFINES_H___)
#	define ___DEFINES_H___

/* Platform (can be expanded) */
#	define UNKNOWN_OS 0
#	define WINDOWS_OS 1
#	define LINUX_OS   2

#	if defined(_WIN32)
#		define HOST_OS WINDOWS_OS
#	elif defined(__linux__)
#		define HOST_OS LINUX_OS
#	else
#		define HOST_OS UNKNOWN_OS
#	endif


/* C language standard version */
#	if defined(__STDC_VERSION__)
#		if __STDC_VERSION__ == 199409L
#			define C_STANDARD 94
#		elif __STDC_VERSION__ == 199901L
#			define C_STANDARD 99
#		elif __STDC_VERSION__ == 201112L
#			define C_STANDARD 11
#		elif __STDC_VERSION__ == 201710L
#			define C_STANDARD 18
#		endif
#	elif defined(__STDC__)
#		define C_STANDARD 89
#	endif

/* Integer types */
typedef unsigned int uint;

#	if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#		include <stdint.h>
typedef int8_t  int8;
typedef int16_t int16;
typedef int32_t int32;

typedef uint8_t  uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
#	else
typedef signed char  int8;
typedef signed short int16;
typedef signed int   int32;

typedef unsigned char  uint8;
typedef unsigned short uint16;
typedef unsigned int   uint32;
#	endif


/* Boolean type */
#	if !defined(FALSE)
#		define FALSE 0
#	endif

#	if !defined(TRUE)
#		define TRUE  1
#	endif

#	if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#		include <stdbool.h>
typedef bool boolean;
#	else
typedef int boolean;
#	endif


/* Null pointer */
#	if !defined(NULL)
#		define NULL ((void *)0)
#	endif


/* Endianness */
#	define UNKNOWN_ENDIAN 0
#	define B_ENDIAN       1
#	define L_ENDIAN       2

#	if defined(__BIG_ENDIAN__) || \
		( defined(__BYTE_ORDER__) && \
		(__BYTE_ORDER__ == __ORDER_BIG_ENDIAN__) ) 
#		define ENDIAN	B_ENDIAN
#	elif defined(__LITTLE_ENDIAN__) || \
		( defined(__BYTE_ORDER__) && \
		(__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__) )
#		define ENDIAN	L_ENDIAN
#	else
#		define ENDIAN	UNKNOWN_ENDIAN
#	endif


/* Visibility keywords */
#	define GLOBAL extern
#	define INTERNAL static


/* Inlining */
#	if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#		define INLINE inline
#	else
#		define INLINE
#	endif

/* TODO: compiler detection (MSVC, clang, gcc), compiler extenstions (always_inline) etc. */
#endif /* ___DEFINES_H___ */