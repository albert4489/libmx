#include "../inc/libmx.h"

int mx_count_words(const char *str, char c) {
    if(str == NULL) {
        return -1;
    }
    int count = 0, word = 0;
    while(*str != '\0') {
        if(*str != c) {
            if (!word) {
                count++;
                word = 1;
            }
        } else {
            word = 0;
        }
        str++;
    }
    return count;
}
