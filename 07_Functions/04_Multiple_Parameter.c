#include <stdio.h>

void myfunction(char name[], int age) {
    printf("Hello, %s. Your age is %d\n", name, age);
}

int main() {
    myfunction("Liam", 23);
    myfunction("sakib", 32);
    myfunction("Nazmus", 382);
    return 0;
}