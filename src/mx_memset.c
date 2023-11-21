#include "../inc/libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    unsigned char *a = b;
    while(len--) {
        *a++ = c;
    }
    return b;
}

