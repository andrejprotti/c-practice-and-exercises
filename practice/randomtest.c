#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    srand(time(NULL));
    
    int teste = (rand() % 20) + 1;
    
    printf("Resultado 1d20: %d", teste);
    
    return 0;
    
}