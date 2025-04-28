#include <stdio.h>
int main (){
    char carName[] = "Volvo";
    int i;
    for (i = 0; i < 5; i++) {
        printf("%c\n", carName[i]);
    }
    return 0;
}