#include <stdio.h>

int main(int argc, char *argv[]) {
    
    int a;
    int *aPtr;
    
    a = 7;
    aPtr = &a;
    
    printf("Endereço de a: %p\nValor de aPtr: %p", &a, aPtr);
    
    printf("\nValor de a: %d\nValor de *aPtr: %d", a, *aPtr);
    
    printf("\nMostrando que * e & sao complementos\n&*aPtr %p = %p",
    &*aPtr, *&aPtr);
    
    return 0;
}