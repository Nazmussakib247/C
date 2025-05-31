#include <stdio.h>
int main(){
    int myCGPA = 3.297;
    int* pointerVariable = &myCGPA;

    // printing value from pointer variable
    printf("%d\n", *pointerVariable);
    return 0;
}
