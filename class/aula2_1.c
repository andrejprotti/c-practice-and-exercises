    //André Jardim Protti - 04/03/2015
    #include <stdio.h>
    #include <inttypes.h>

    int main (int argc, char *argv[]){

        //Declaração de variáveis do escopo do main
        int a;
        double b;
        float c;
        int8_t d;
        unsigned int e;
        unsigned char f;
        unsigned long g;
        
        printf("A: %d bytes\n", sizeof(a));
        printf("B: %d bytes\n", sizeof(b));
        printf("C: %d bytes\n", sizeof(c));
        printf("D: %d bytes\n", sizeof(d));
        printf("E: %d bytes\n", sizeof(e));
        printf("F: %d bytes\n", sizeof(f));
        printf("G: %d bytes\n", sizeof(g));
        
        return 0;
    }