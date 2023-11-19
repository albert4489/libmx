#include "../inc/libmx.h"

void mx_printint(int n) {
    if(n>=-2147483648 || n<=2147483647){
        if (n < 0)
        {
            mx_printchar(45);
            n = -n;
        }

        if (n > 9)
        {
            mx_printint(n/10);
        }

        mx_printchar((n%10) + '0');
    }
}
