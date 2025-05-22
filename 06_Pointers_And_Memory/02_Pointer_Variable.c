#include <stdio.h>
int main(){
    int myCGPA = 3.297;
    int* pointerVariable = &myCGPA;

    //Output the value of myCGPA
    printf("%d\n", myCGPA);

    //Output the memory address 
    printf("%p\n", &myCGPA);

    //Output memory adress with pointer 
    printf("%p\n", pointerVariable);
    return 0;
}