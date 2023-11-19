#include "../inc/libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    const unsigned char *ptr = (unsigned char*)s + n - 1;
    for(; n; n--) {
        if(*--ptr == (unsigned char)c) {
            return (void*)ptr;
        }
    }
    return NULL;
}
