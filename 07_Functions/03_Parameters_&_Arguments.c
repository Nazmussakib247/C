#include <stdio.h>
void myFunction(char name[]) {
    printf("Hello %s\n", name);
}
int main(){
    myFunction("Nazmus");
    myFunction("Sakib");
    myFunction("Rakib");
    return 0;
}