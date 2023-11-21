#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len){

    if(little_len == 0) {
        return (void *)big;
    }
    if (big_len >= little_len) {
        const char *e = (const char *)big + big_len - little_len;
        const char *b = (const char *)big;
        while (b <= e) {
            if(mx_memcmp(b, little, little_len) == 0) {
                return (void *)b;
            }
            b++;
        }
    }
    return NULL;
}

