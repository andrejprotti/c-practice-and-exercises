#include <stdio.h>
#define RESPONSE_SIZE 40
#define FREQUENCY_SIZE 11

int main(int argc, char *argv[]) {

    int answer;
    int rating;
    
    int frequency[FREQUENCY_SIZE] = {0};
    
    int responses[RESPONSE_SIZE] = {1,2,3,4,5,2,7,8,9,10,1,2,3,
    4,5,6,7,7,9,10,1,2,3,3,5,6,7,8,9,10,1,2,3,4,7,6,7,8,8,10};
    
    for( answer = 0; answer < RESPONSE_SIZE; answer++){
        ++frequency[responses[answer]];
    }
    
    printf("%s%17s\n","Avaliacao","Frequencia");
    
    for(rating = 1; rating < FREQUENCY_SIZE; rating++){
        printf("%6d%17d\n", rating, frequency[rating]);
    }
    
    return 0;
}