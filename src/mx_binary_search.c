#include "../inc/libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {

    int index = -1;
    int min = 0;
    int max = size - 1;
    int search;

    while (min <= max) {
        (*count)++;
        search = (min + max) / 2;
        int cmp = mx_strcmp(arr[search], s);
        if (cmp < 0) {
            min = search + 1;
        } else if (cmp > 0) {
            max = search - 1;
        } else {
            index = search;
            break;
        }
    }

    if (index == -1) {
        *count = 0;
    }

    return index;
}

