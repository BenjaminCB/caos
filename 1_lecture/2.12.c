#include<stdio.h>

int main() {
    int x = 0x87654321;
    printf("%x\n", x);

    int a = x & 0xFF;
    printf("%x\n", a);

    int b = x ^ ~0xFF;
    printf("%x\n", b);

    int c = x | 0xFF;
    printf("%x\n", c);

    return 0;
}
