#include <stdio.h>

int main(int argc, char *argv[]) {
    int x = 5;
    int y;
    
    const int *const ptr = &x;
    
    //*ptr = 7;
    
    //ptr = &y;
    
    printf("%d", ++x);
    
    return 0;
}