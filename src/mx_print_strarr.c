#include "../inc/libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
    if(arr != NULL || delim != NULL) {
        int first = 1;
        while (*arr) {
            if (!first) {
                mx_printstr(delim);
            }
            mx_printstr(*arr);
            first = 0;
            arr++;
        }
        mx_printchar('\n');
    }
}

