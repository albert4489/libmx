#include "../inc/libmx.h"

int mx_sqrt(int x) {
    if (x < 0
        || x >= 2147483647){
        return 0;
    }
    if (x == 0
        || x == 1){
        return x;
    }
    int i = 1, result = 1;
    while (result < x) {
        i++;
        result = i * i;
    }

    if (result == x) {
        return i;
    } else {
        return 0;
    }
}
