#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    if(ptr == NULL) {
        return malloc(size);
    }
    size_t old = malloc_size(ptr);
    if(size <= old) {
        return ptr;
    }
    void *new = malloc(size);
    if(new != NULL) {
        mx_memcpy(new, ptr, old);
        free(ptr);
    }
    return new;
}

