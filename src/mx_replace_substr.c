#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    if (str == NULL || sub == NULL || replace == NULL) {
        return NULL;
    }

    int str_len = mx_strlen(str);
    int sub_len = mx_strlen(sub);
    int replace_len = mx_strlen(replace);

    int count = mx_count_substr(str, sub);

    char *new_str = mx_strnew(str_len + count * (replace_len - sub_len));

    if (new_str == NULL) {
        return NULL;
    }

    int i = 0;

    while (*str) {
        if (mx_strstr(str, sub) == str) {
            mx_strcpy(&new_str[i], replace);
            i += replace_len;
            str += sub_len;
        } else {
            new_str[i++] = *str++;
        }
    }

    new_str[i] = '\0';

    return new_str;
}
