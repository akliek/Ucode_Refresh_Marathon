#include <unistd.h>

void mx_printchar(char c) {
    write(1, &c, 1);
}

void mx_printint(int n) {
    if(n == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }
    if(n < 0) {
        mx_printchar('-');
        n = -n;
    }
    if(n > 9) {
        mx_printint(n / 10);
    }
    mx_printchar((n % 10) + 48);
}

void mx_print_arr_int(const int *arr, int size) {
    for(int i = 0; i < size; i++) {
        mx_printint(arr[i]);
        mx_printchar('\n');
    }
}

void mx_sort_arr_int(int *arr, int size) {
    int swap = 0;

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(arr[i] < arr[j]) {
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
}
