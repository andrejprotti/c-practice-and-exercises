#include <stdio.h>

size_t getSize(float *ptr);

int main(int argc, char *argv[]) {
    
    float array[20];
    
    printf("Num de bytes no array: %d"
        "\nNumero de bytes getSize: %d", sizeof(array),
        getSize(array));
    
    return 0;
}

size_t getSize(float *ptr){
    return sizeof(ptr);
}