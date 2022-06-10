#include<stdio.h>

int f(int x) {
    return x & 0xFF;
}

int main() {
    unsigned int a = 0x55;
    unsigned int b = 0x46;

    printf("%x\n", f(a & b));
    printf("%x\n", f(a | b));
    printf("%x\n", f(~a | ~b));
    printf("%u\n", a & !b);
    printf("%u\n", a && b);
    printf("%u\n", a || b);
    printf("%u\n", !a || !b);
    printf("%u\n", a && ~b);
    return 0;
}
