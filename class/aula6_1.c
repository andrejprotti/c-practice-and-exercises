#include <stdio.h>

int main(int argc, char *argv[]) {
    
    int b[] = { 10, 20, 30, 40 };
    int *bPtr = b;
    int i;
    int offset;

    printf("Array b impresso com:\nNotacao de subscrito de array\n");

    for (i = 0; i < 4; i++)
    {
        printf("b[%d] = %d\n", i, b[i]);
    }

    printf("\nNotacao de ponteiro/offset onde o ponteiro e o nome do array\n");

    for (offset = 0; offset < 4; offset++){
        printf("*(b+%d) = %d\n", offset, *(b + offset));
    }

    printf("\nNotacao de subscrito de ponteiro \n");

    for (i = 0; i < 4; i++)
    {
        printf("bPtr[%d] = %d\n", i, bPtr[i]);
    }

    printf("\nNotacao de ponteiro/deslocamento\n");

    for (offset = 0; offset < 4; offset++)
    {
        printf("*(bPtr + %d) = %d\n", offset, *(bPtr + offset));
    }


    int espera = 0;
    scanf("%d", espera);
    return 0;
}