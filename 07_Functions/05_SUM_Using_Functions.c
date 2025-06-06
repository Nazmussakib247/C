#include <stdio.h>

void calculateSum (int x, int y) {
    int sum = x + y;
    printf("The Sum of these (%d + %d) two number is: %d \n", x, y, sum);
}

int main(){
    calculateSum(53, 24);
    calculateSum(467362532, 236823367);
    return 0;
}