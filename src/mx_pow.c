#include "../inc/libmx.h"

double mx_pow(double n, unsigned int pow) {
    double answer;
    if (pow == 0)
        return 1;
    answer = mx_pow(n, pow / 2);
    if (pow % 2 == 0)
        return answer * answer;
    else
        return n * answer * answer;
}
