#include <stdio.h>
#include <ctype.h>

void convertToUppercase(char *sPtr);

int main(int argc, char *argv[]) {
    char string[] = "caracteres e R$32,98";
    
    printf("\nString antes: %s\n", string);
    
    convertToUppercase(string);
    
    printf("\nString depois: %s\n", string);
    
    return 0;
}

void convertToUppercase(char *sPtr){
    
    while(*sPtr != '\0') {
    
        if(islower(*sPtr)){
            *sPtr = toupper(*sPtr);
        }
        
        ++sPtr;
    }
    
}