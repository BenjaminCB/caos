#include <stdio.h>
#include <stdlib.h>
#include <x86intrin.h>

void average_array(long *arr, int size, long* res) {
    int i;

    long acc1 = 0;
    long acc2 = 0;
    long acc3 = 0;
    long acc4 = 0;
    int limit = size - 7;
    for (i = 0; i < limit; i += 8) {
        acc1 += (arr[i] + arr[i+4]);
        acc2 += (arr[i+1] + arr[i+5]);
        acc3 += (arr[i+2] + arr[i+6]);
        acc4 += (arr[i+3] + arr[i+7]);
    }
    for (;i < size; i++)
        acc1 += arr[i];

    *res = (acc1 + acc2 + acc3 + acc4) / size;
}

//#define SIZE 1024*1024*32
#define SIZE 1024
long the_array[SIZE];

void init_array(long *arr, int size) {
    int i;
    for (i = 0; i < size; i++)
        arr[i] = rand() % 1024;
}


int main() {
    init_array(the_array, SIZE);
    long avg = 0;

    unsigned long t1,t2;

    t1 = __rdtsc();
    average_array(the_array, SIZE, &avg);
    t2 = __rdtsc();
    printf("Time %lu cycles \t Average: %ld\n", t2-t1, (long) avg);

    return 0;
}
