#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    if(s1 == NULL) {
        return NULL;
    }
    char *dup = malloc(n+1);
    if(dup == NULL) {
        return NULL;
    }
    mx_strncpy(dup, s1, n);

    dup[n] = '\0';

    return dup;
}
