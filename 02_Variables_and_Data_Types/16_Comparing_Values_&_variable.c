#include <stdio.h>
#include <stdbool.h>

int main(){
    // Comparison operator
    printf("%d\n", 100 > 87);  // Output: 1

    // Comparison between two variables
    int x = 28847;
    int y = 33993;
    printf("%d\n", x > y);     // Output: 0

    // Comparing boolean variables
    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;
    printf("%d\n", isPizzaTasty == isHamburgerTasty); // Output: 1

    return 0;
}
