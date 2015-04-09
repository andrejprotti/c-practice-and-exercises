#include "stdafx.h"
#include <string.h>

void displayBits(unsigned value);

int main(int argc, char *argv[])
{
    unsigned x;

    printf("Digite um inteiro sem sinal: ");
    scanf("%u", &x);

    displayBits(x);

    int espera = 0;
    scanf("%d", espera);
    return 0;
}

void displayBits(unsigned value){
    unsigned c;

    unsigned displayMask = 1 << 31;

    printf("%10u = ", value);

    for (c = 1; c <= 32; c++)
    {
        putchar(value & displayMask ? '1' : '0');
        value <<= 1;

        if (c % 8 == 0){
            putchar(' ');
        }
    }

    putchar('\n');
}