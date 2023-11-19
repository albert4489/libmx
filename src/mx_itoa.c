#include "../inc/libmx.h"

char *mx_itoa(int number) {
    int length = mx_get_num_length(number);
    int negative = 0;
    if (number < 0) {
        length++;
        negative = 1;
        number = -number;
    }
    char *str = mx_strnew(length);
    for (int i = length - 1; i >= 0 ; i--) {
        str[i] = number % 10 + '0';
        number /=10;
    }
    if(negative) {
        str[0]='-';
    }
    return str;
}
