#include "../inc/libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    if (hex == NULL) {
        return 0;
    }
    unsigned long dec = 0;

    int length = mx_strlen(hex);
    for (int i = 0; i < length; i++) {

        char digit = hex[length - 1 - i];

        if (digit >= '0' && digit <= '9')
            dec += (digit - '0') * mx_pow(16, i);
        else if (digit >= 'A'
                 && digit <= 'F')
            dec += (digit - 'A' + 10) * mx_pow(16, i);
        else if (digit >= 'a'
                 && digit <= 'f')
            dec += (digit - 'a' + 10) * mx_pow(16, i);
    }
    return dec;
}

