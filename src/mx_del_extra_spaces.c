#include "../inc/libmx.h"

char *mx_del_extra_spaces(const char *str) {
    if (!str) {
        return NULL;
    }
    char *new_str = (char *) malloc(mx_strlen(str) + 1);
    if (!new_str) {
        return NULL;
    }
    int i = 0;
    while (mx_isspace(str[i])) {
        i++;
    }
    int j = 0;
    while (str[i]) {
        if (!mx_isspace(str[i]) || (mx_isspace(str[i]) && !mx_isspace(str[i + 1]))) {
            new_str[j++] = str[i++];
        } else {
            i++;
        }
    }

    while (mx_isspace(new_str[j - 1])) {
        j--;
    }
    new_str[j] = '\0';

    if (j == 0) {
        mx_strdel(&new_str);
        return NULL;
    }

    return new_str;
}

