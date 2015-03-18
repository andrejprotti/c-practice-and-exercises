#include <stdio.h>

int main(int argc, char *argv[])
{
    int numbers[4] = {0};
    char name[5] = {'a'};
    
    //Impressao dos valores sem alteracoes
    
    printf("Numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    
    printf("Name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    
    printf("Name: %s\n", name);
    
    //Adicionando os números
    
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    
    //Adicionando o nome
    
    name[0] = 'A';
    name[1] = 'n';
    name[2] = 'd';
    name[3] = 'r';
 
    //Impressao apos alteracoes
 
    printf("Numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    
    printf("Name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    
    printf("Name: %s\n", name);
 
    //Outra forma de usar o nome
    
    char *outra = "Andre";
    
    printf("Outra forma: %s\n",outra);
    
    printf("Outra forma, caracteres separados: %c %c %c %c %c\n", outra[0],outra[1],outra[2],
    outra[3],outra[4]);
    
    return 0;
 
}