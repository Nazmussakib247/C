#include <stdio.h>
int main (){
    int myArray[5] = {0, 25, 50, 75, 100};
    int i;
    for (i = 0; i < 5; i++)
    { 
        printf("%p\n", &myArray);
    }
    return 0;
}