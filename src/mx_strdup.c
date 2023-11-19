#include "../inc/libmx.h"

char *mx_strdup(const char *s1) {
    int str_size = mx_strlen(s1);
    char *dup = mx_strnew(str_size);

    if (dup == NULL) {
        return NULL;
    }

    mx_strcpy(dup, s1);

    return dup;
}
