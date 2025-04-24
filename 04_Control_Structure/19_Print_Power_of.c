#include <stdio.h>
int main(){
    int i;
    // print the powers of 2 up to 512
    for (i = 2; i <= 512; i *= 2) {
        printf("%d\n", i);
    }
    return 0;
}