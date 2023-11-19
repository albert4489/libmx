#include "../inc/libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    if (str == NULL || sub == NULL) {
        return -2;
    }

    int stlen = mx_strlen(str);
    int sulen = mx_strlen(sub);

    for (int i = 0; i <= stlen - sulen; i++) {
        int j;
        for (j = 0; j < sulen; j++) {
            if (str[i + j] != sub[j]) {
                break;
            }
        }
        if (j == sulen) {
            return i;
        }
    }
    return -1;
}
