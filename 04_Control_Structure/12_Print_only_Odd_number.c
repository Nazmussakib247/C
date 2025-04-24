#include <stdio.h>

int main() {
    int mynumber = 0;

    do {
        if (mynumber % 2 != 0) {
            printf("%d\n", mynumber);
        }
        mynumber++;
    } while (mynumber < 100);

    return 0;
}