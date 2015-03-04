#include <stdio.h>

int factorial (int n) {
    printf("%d\n",n);
    if(n == 1){
        return 1;
    } else {
        return n * factorial(n - 1);
    }

}

int main (int argc, char *argv[]){
    
    int resposta = factorial(7);
    
    printf("\nResposta = %d", resposta);

    
    return 0;
}