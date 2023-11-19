#include "../inc/libmx.h"

int mx_quicksort(char **arr, int left, int right) {
    int count = 0;
    int i = left;
    int j = right;

    if (arr == NULL){
        return -1;
    }

    while (i <= j) {
        while (mx_strlen(arr[i]) < mx_strlen(arr[(left + right) / 2])) {
            i++;
        }

        while (mx_strlen(arr[j]) > mx_strlen(arr[(left + right) / 2])) {
            j--;
        }

        if (i <= j) {
            if (mx_strlen(arr[i]) != mx_strlen(arr[j])) {
                char *temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                count++;
            }

            i++;
            j--;
        }
    }

    if (left < j) {
        count += mx_quicksort(arr, left, j);
    }

    if (i < right) {
        count += mx_quicksort(arr, i, right);
    }

    return count;
}
