#include <stdio.h>
int main (){
    int myAge = 23;
    int votingAge = 18;
    if (myAge >= votingAge) {
        printf("Old enough to vote");
    } else {
        printf("Underage, Can't Vote!");
    }
    return 0;
}