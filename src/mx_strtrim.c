#include "../inc/libmx.h"

char *mx_strtrim(const char *str) {
    if (str == NULL) {
        return NULL;
    }
    int start = 0;
    int end = mx_strlen(str) - 1;
    while (mx_isspace(str[start])) {
        start++;
    }
    while (end > start && mx_isspace(str[end])) {
        end--;
    }
    int trimm_length = end - start + 1;

    char *trimm_str = (char *)malloc(trimm_length + 1);

    if (trimm_str != NULL) {
        for (int i = 0; i < trimm_length; i++) {
            trimm_str[i] = str[start + i];
        }
        trimm_str[trimm_length] = '\0';
    }

    return trimm_str;
}
