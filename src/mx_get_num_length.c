#include "../inc/libmx.h"

int mx_get_num_length(int num) {
    int length = 0;
    if (num == 0) return 1;
    while (num != 0) {
        num /= 10;
        length++;
    }
    return length;
}
