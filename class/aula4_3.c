#include <stdio.h>

int main(int argc, char *argv[]) {
    
    int y = 5;
    int *yPtr;
    
    yPtr = &y;
    
    printf("%p\n", yPtr);
    
    return 0;
}