#include <stdio.h>
#include <ctype.h>

void printCharacters(const char *sPtr);

int main(int argc, char *argv[]) {
    char string[] = "imprime caracteres de uma string";
    
    printf("\nString: %s\n", string);
    
    printCharacters(string);
    
    printf("\n");
    
    return 0;
}

void printCharacters(const char *sPtr){
    
    for(;*sPtr != '\0'; sPtr++){
        printf("%c", *sPtr);
    }
    
}