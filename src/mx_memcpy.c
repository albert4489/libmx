#include "../inc/libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    char *h = dst;
    const char *f = src;
    while(n){
        *h++ = *f++;
        --n;
    }
    return dst;
}

