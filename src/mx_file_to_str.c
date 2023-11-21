#include "../inc/libmx.h"

char *mx_file_to_str(const char *file) {
    if (!file) {
        return NULL;
    }

    int file2 = open(file, O_RDONLY);
    if (file2 < 0) {
        return NULL;
    }

    char s;
    int len = 0;

    while (read(file2, &s, 1) > 0) {
        len++;
    }

    close(file2);

    file2 = open(file, O_RDONLY);
    if (file2 < 0) {
        return NULL;
    }

    char *str = mx_strnew(len);
    if (!str) {
        close(file2);
        return NULL;
    }

    for (int i = 0; i < len; i++) {
        if (read(file2, &s, 1) <= 0) {
            close(file2);
            free(str);
            return NULL;
        }
        str[i] = s;
    }

    str[len] = '\0';
    close(file2);
    return str;
}

