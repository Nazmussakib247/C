#include <stdio.h>

int main() {
    int day = 6;

    switch (day) {
        case 1:
            printf("Saturday");
            break; // When C reaches a break keyword, it breaks out of the switch block
        case 2:
            printf("Sunday");
            break;
        case 3:
            printf("Monday");
            break;
        case 4:
            printf("Tuesday");
            break;
        case 5:
            printf("Wednesday");
            break;
        case 6:
            printf("Thursday");
            break;
        case 7:
            printf("Friday");
            break;
        default: // The default keyword specifies some code to run if there is no case match
            printf("Invalid day");
    }

    return 0;
}
