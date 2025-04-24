#include <stdio.h>

int main() {
    int numbers = 123456789; // Variable of original number
    int revNumbers = 0;      // A variable to store reverse number 

    while (numbers) {
        revNumbers = revNumbers * 10 + numbers % 10;
        numbers /= 10;
    }

    printf("Reversed Number: %d\n", revNumbers);

    return 0;
}
