#include <stdio.h>

int main() {
    int nums[] = { 539913291, 539767857, 759570537, 1651862635, 560883042 };

    for (int i = 0; i < 5; i++) {
        printf("%x\n", nums[i]);
    }

    long  ps[] = { 0x7ffff7dd5129
                 , 0x7ffff7dd5377
                 , 0x7ffff7dd7192
                 , 0x7ffff7dd5190
                 , 0x7ffff7dd536b
                 , 0x7ffff7dd5072
                 , 0x7ffff7dd54b0
                 , 0x7ffff7dd5342
                 , 0x7ffff7dd50d0
                 , 0x7ffff7dd53a2
                 , 0x7ffff7dd5072
                 , 0x7ffff7dd539c
                 , 0x7ffff7dd5717
                 , 0x7ffff7dd5342
                 , 0x7ffff7dd5520
                 };

    for (int i = 0; i < 15; i++) {
        printf("%c\n", *((char*) ps[i]));
    }

    return 0;
}
