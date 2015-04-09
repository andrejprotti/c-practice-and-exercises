#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char s1[20] = "Feliz";
    char s2[] = " Ano Novo";
    char s3[40] = "";

    printf("s1 = %s\ns2 = %s\n", s1, s2);

    printf("strcat(s1, s2) = %s\n", strcat(s1, s2));

    printf("strncat(s3, s1, 6) = %s\n", strncat(s3, s1, 6));

    printf("strcat(s3, s1) = %s\n", strcat(s3, s1));

    int espera = 0;
    scanf("%d", espera);
    return 0;
}