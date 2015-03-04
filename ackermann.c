//André Jardim Protti
#include <stdio.h>

int ack(int m, int n){
    
    int ans;
    
    if (m == 0) {
        ans = n + 1;
    } else if (n == 0) {
        ans = ack(m-1, 1);
    } else {
        ans = ack(m-1, ack(m,n-1));
    }
    
    return ans;
    
}

int main (int argc, char *argv[]){

    int resposta = ack (4,1);
    
    printf("Ackermann (4,1) = %d", resposta);

    return 0;
}