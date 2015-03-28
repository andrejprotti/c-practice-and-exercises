#include <stdio.h>

void f(int *xPtr);

int main(int argc, char *argv[]) {
    int y;
    
    f(&y);
    
    printf("%d",y);
    
    return 0;
}

void f(int *xPtr){
    
    *xPtr = 100;
    
}