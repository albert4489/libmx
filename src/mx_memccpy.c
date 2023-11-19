#include "../inc/libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    unsigned char *destination = dst;
    unsigned const char *source = src;

    while(n--) {
        if((*destination++ = *source++) == c)
            return destination;
    }
    return NULL;
}
