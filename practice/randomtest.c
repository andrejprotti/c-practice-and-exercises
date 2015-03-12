/*Just testing random number generation in C by 
* testing the d20 advantage and disadvantage rolls.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    srand(time(NULL));
    
    int nTosses = 10000;
    
    int firstToss[nTosses];
    int secondToss[nTosses];
    int advantage[nTosses];
    int disadvantage[nTosses];
    
    double avg1 = 0;
    double avgAdv = 0;
    double avgDis = 0;
    
    for(int i = 0; i < nTosses; i++){
        firstToss[i] = (rand() % 20) + 1;
        secondToss[i] = (rand() % 20) + 1;
        avg1 += ((firstToss[i] + secondToss[i])/2);
        
        if(firstToss[i] > secondToss[i]){
            advantage[i] = firstToss[i];
            disadvantage[i] = secondToss[i];
        } else {
            advantage[i] = secondToss[i];
            disadvantage[i] = firstToss[i];
        }
        
        avgAdv += advantage[i];
        avgDis += disadvantage[i];
        
    }
    
    avg1 = (avg1/nTosses);
    avgAdv = (avgAdv/nTosses);
    avgDis = (avgDis/nTosses);
    
    printf("\nAverage value of a double toss: %f\n\n", avg1);
    printf("\nAverage value of an advantage toss: %f\n\n", avgAdv);
    printf("\nAverage value of a disadvantage toss: %f\n\n", avgDis);
    
    return 0;
    
}