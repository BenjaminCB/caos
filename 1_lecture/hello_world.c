#include <stdio.h>

void print_arr(long *arr, int arr_len);
void swap(long *x, long *y);

int main() {
    puts("Hello, world!");

    long arr[20];
    for (int i = 0; i < 20; i++) {
        arr[i] = 10 + i;
    }

    print_arr(arr, 20);

    long *p = arr + 3;
    printf("%p\n",p);
    printf("%lu\n",*p);

    swap(&arr[0], &arr[5]);
    print_arr(arr, 20);

    long y = *(p + 9);
    printf("%lx\n", y);

    y = *(p + 100);
    printf("%lx\n", y);

    y = *(p + 100000);
    printf("%lx\n", y);

    return 0;
}

void print_arr(long *arr, int arr_len) {
    for (int i = 0; i < arr_len; i++) {
        printf("%lu, %lx\n", arr[i], arr[i]);
    }
}

void swap(long *x, long *y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}
