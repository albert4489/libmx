#include "../inc/libmx.h"

char **mx_strsplit(const char *s, char c) {
    if(s == NULL) {
        return NULL;
    }
    int words = 0;
    for (int i = 0; s[i]!='\0'; i++) {
        if(s[i] != c && (i == 0 || s[i-1] == c)) {
            words++;
        }
    }
    char **arr = malloc((words + 1) * sizeof(char *));
    if(arr == NULL) {
        return NULL;
    }
    int f = 0;
    for(int i = 0; i < words; i++) {
        while(s[f] == c){
            f++;
        }
        int a = f;
        while(s[f] != '\0' && s[f] != c) {
            f++;
        }
        arr[i] = mx_strndup(s + a, f - a);
    }
    arr[words] = NULL;
    return arr;
}
