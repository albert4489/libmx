#include "../inc/libmx.h"

void mx_del_strarr(char ***arr) {

    char **curr = *arr;

    while(*curr != NULL) {
        free(*curr);
        ++curr;
    }
    free(*arr);
    *arr = NULL;
}
