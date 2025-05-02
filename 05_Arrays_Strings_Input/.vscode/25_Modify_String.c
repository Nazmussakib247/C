#include <stdio.h>
int main(){
    char myString[] = "Hello World!";
    myString[0] = 'B';
    printf("%s", myString ); // Print Bello world instead of hello world
    return 0;
}