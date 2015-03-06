//André Jardim Protti - 04/03/2015
#include <stdio.h>
#include <time.h>

int main (int argc, char *argv[]){

    time_t sec;
    sec = time(NULL);
    
    if (sec < 1318075200){
        printf("hello, world\n");
    } else {
        printf("goodbye, world\n");
    }
    
    printf("%d",sec);
    
    return 0;
    
}