#include "../inc/libmx.h"

void mx_print_unicode(wchar_t c){
    if(c < 0x80) {
        write(1, &c, 1);
    } else {
        int bytes;
        char buffer[4];

        if (c < 0x800) {
            bytes = 2;
            buffer[0] = 0xC0 | (c >> 6);
            buffer[1] = 0x80 | (c & 0x3F);
        } else if (c < 0x10000) {
            bytes = 3;
            buffer[0] = 0xE0 | (c >> 12);
            buffer[1] = 0x80 | ((c >> 6) & 0x3F);
            buffer[2] = 0x80 | (c & 0x3F);
        } else {
            bytes = 4;
            buffer[0] = 0xF0 | (c >> 18);
            buffer[1] = 0x80 | ((c >> 12) & 0x3F);
            buffer[2] = 0x80 | ((c >> 6) & 0x3F);
            buffer[3] = 0x80 | (c & 0x3F);
        }
        write(1, buffer, bytes);
    }
}
