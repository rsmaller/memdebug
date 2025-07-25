#pragma once
#define MEM_DEBUG_H
#define malloc malloc_db
#define calloc calloc_db
#define realloc realloc_db
#ifndef NULL
    #define NULL (void *)0;
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