#include "../inc/libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    unsigned char *destination = dst;
    const unsigned char *source = src;
    if (destination < source) {
        while(len--) {
            *destination++ = *source++;
        }
    } else {
        while(len--) {
            destination[len] = source[len];
        }
    }
    return dst;
}
