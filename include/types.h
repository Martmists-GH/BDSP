#pragma once

#include <inttypes.h>
#include <stdalign.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef unsigned char       u8;
typedef unsigned short      u16;
typedef unsigned int        u32;
typedef uint64_t            u64;
typedef __uint128_t         u128;

typedef signed char         s8;
typedef signed short        s16;
typedef signed int          s32;
typedef int64_t             s64;
typedef __int128_t          s128;

typedef float               f32;
typedef double              f64;

typedef unsigned long int ulong;

typedef unsigned short ushort;

typedef unsigned int uint;

typedef unsigned char byte;

//typedef signed int          ssize_t;

//typedef unsigned int        uintptr_t;
//typedef signed int          intptr_t;

typedef __builtin_va_list va_list;
#define va_start(v,l) __builtin_va_start(v,l)
#define va_end(v) __builtin_va_end(v)

enum Direction
{
    RIGHT = 0,
    LEFT  = 1,
    UP    = 2,
    DOWN  = 3
};

struct Rect
{
	float left;
	float bottom;
	float right;
	float top;
};
