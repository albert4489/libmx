#include "../inc/libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
    if(!s1 && !s2) {
        return NULL;
    }
    if(!s1){
        return mx_strdup(s2);
    }
    if(!s2){
        return mx_strdup(s1);
    }
    char *str = malloc(mx_strlen(s1)+ mx_strlen(s2) + 1);
    if(!str) {
        return NULL;
    }
    mx_strcpy(str,s1);
    mx_strcat(str,s2);
    return str;
}
