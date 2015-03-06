//André Jardim Protti - 04/03/2015
#include <stdio.h>
#include <stdbool.h>

int main (int argc, char *argv[]){

    //string
    char* sabor = "macarrao ao pesto";
    printf("%s\n", sabor);
    
    //inteiro
    int numeroDaora = 42;
    printf("%d\n", numeroDaora);
    
    //float
    float valor = 30.523;
    printf("%e\n",valor);
    
    //double
    long double muiPequeno = 0.4e-300;
    printf("%e\n", muiPequeno);
    
    //boolean
    bool verdadeiro = false;
    printf("%d\n", verdadeiro);
    
    return 0;
    
}