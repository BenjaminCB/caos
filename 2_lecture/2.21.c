#include<stdio.h>

int main() {
    printf("%u\n", -2147483647-1 == 2147483648U);
    printf("%i\n", -2147483647-1 < 2147483647);
    printf("%u\n", -2147483647-1U < 2147483647);
    printf("%i\n", -2147483647-1 < 2147483647);
    printf("%u\n", -2147483647-1U < -2147483647);
    return 0;
}
