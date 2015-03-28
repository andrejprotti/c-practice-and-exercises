#include <stdio.h>

int cubeByValue(int n);
void cubeByReference(int *nPtr);

int main(int argc, char *argv[]) {
    int number = 5;
    
    printf("Valor original do numero: %d\n", number);
    
    cubeByReference(&number);
    
    printf("Novo valor do numero: %d\n", number);
    
    return 0;
}

int cubeByValue(int n){
    return n * n * n;
}

void cubeByReference(int *nPtr){
    *nPtr = (*nPtr) * (*nPtr) * (*nPtr);
}