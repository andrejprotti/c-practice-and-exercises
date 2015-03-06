//André Jardim Protti - 04/03/2015
#include <stdio.h>

int main (int argc, char *argv[]){

    unsigned char c;
    
    c = 1;
    c = c<<7;
    
    printf("%u", c);

    return 0;
    
}