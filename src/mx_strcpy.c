#include "../inc/libmx.h"

char *mx_strcpy(char *dst, const char *src) {

    char *crt = dst;

    while (*src !='\0') {
        *crt = *src;
        src++;
        crt++;
    }

    *crt = '\0';
    return dst;
}

