#pragma once
#define MEM_DEBUG_H
#ifdef DEBUG_DISABLE
    #define _malloc malloc
    #define _calloc calloc
    #define _realloc realloc
#else
    #define _malloc malloc_db
    #define _calloc calloc_db
    #define _realloc realloc_db
#endif
#ifndef NULL
    #define NULL ((void *)0);
#endif
#ifndef _INC_STDDEF
    #include <stddef.h>
#endif

void *malloc_db(size_t bytes) {
    return NULL;
}

void *calloc_db(size_t count, size_t bytes) {
    return NULL;
}

void *realloc_db(void *old, size_t newSize) {
    return NULL;
}

#undef NULL