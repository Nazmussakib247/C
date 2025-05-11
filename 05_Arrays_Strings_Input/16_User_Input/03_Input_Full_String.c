#include <stdio.h>
#include <string.h>

int main() {
    char firstName[30];

    printf("Enter your Name here: \n");
    fgets(firstName, sizeof(firstName), stdin);
    firstName[strcspn(firstName, "\n")] = 0;
    printf("Your Name is: %s\n", firstName);

    return 0;
}