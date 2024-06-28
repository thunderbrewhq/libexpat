#ifndef EXPAT_CONFIG_H
#define EXPAT_CONFIG_H 1

#define XML_CONTEXT_BYTES 1024

// LLVM constants
#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
#define BYTEORDER 1234
#else
#define WORDS_BIGENDIAN 1
#define BYTEORDER 4321
#endif

// #define HAVE_ARC4RANDOM 0

// #define HAVE_ARC4RANDOM_BUF 0

// #define HAVE_DLFCN_H 0

#if __linux__ || __FreeBSD__

#define XML_DEV_URANDOM 1

#define HAVE_FCNTL_H 1

#define HAVE_GETPAGESIZE 1

#define HAVE_GETRANDOM 1

#define HAVE_STRINGS_H 1

#define HAVE_SYSCALL_GETRANDOM 1

#define HAVE_SYS_STAT_H 1

#define HAVE_SYS_TYPES 1

#define HAVE_SYS_TYPES 1


#else

// #define HAVE_FCNTL_H 0

// #define HAVE_GETPAGESIZE 0

// #define HAVE_GETRANDOM 0

// #define HAVE_STRINGS_H 0

// #define HAVE_SYSCALL_GETRANDOM 0

// #define HAVE_SYS_STAT_H 0

#endif

#define HAVE_INTTYPES_H 1

// #define HAVE_MEMORY_H 0

// #define HAVE_MMAP 0

#define HAVE_STDINT_H 1

#define HAVE_STDLIB_H 1

#define HAVE_STRING_H 1

#define XML_DTD 1

#define XML_GE 1

#define XML_NS 1


#endif