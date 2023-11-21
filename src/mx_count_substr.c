#include "../inc/libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    if (str == NULL || sub == NULL) {
        return -1;
    }

    int count = 0;

    for (const char *temp = str; (temp = mx_strstr(temp, sub)) != NULL; temp++) {
        count++;
    }

    return count;
}

