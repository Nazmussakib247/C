#include <stdio.h>
int main(){
    int myNum;
    char myChar;

    //Asking User to input
    printf("Press a number and a character and press ENTER: \n");
    scanf("%d %c", &myNum, &myChar);

    //Printing Value
    printf("Your number is: %d\n", myNum);
    printf("Your character is: %c\n", myChar);
    return 0;
}