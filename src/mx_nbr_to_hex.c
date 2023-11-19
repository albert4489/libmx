#include "../inc/libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    if (nbr == 0) {
        char *result = (char *)malloc(2);
        if (result) {
            result[0] = '0';
            result[1] = '\0';
        }
        return result;
    }

    int length = 0;
    unsigned long temp = nbr;
    while (temp > 0) {
        temp /= 16;
        length++;
    }

    char *result = (char *)malloc(length + 1);
    if (result) {
        for (int i = length - 1; i >= 0; i--) {
            int hex = nbr % 16;
            if (hex < 10) {
                result[i] = hex + 48;
            } else {
                result[i] = hex + 87;
            }
            nbr /= 16;
        }
        result[length] = '\0';
    }

    return result;
}
