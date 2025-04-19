#include <stdio.h>
int main(){
    float myFloat = 500;
    printf("Implict version is: %f\n", myFloat); //Automatical change so its implict version
    
    int maxScore = 500;
    int userScore = 437;
    float percentenge = (float) userScore  / maxScore * 100.00; //Using manual (float) parenthesis
    printf("User score percentage is: %.2f", percentenge);
    return 0;
}