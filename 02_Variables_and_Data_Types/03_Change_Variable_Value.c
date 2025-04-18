# include <stdio.h>

int main () {
    int x, y, z;

// Overwriting value of a exisiting variable
    x = 109;
    x = 1999; // Now variable x value is 1999

//assiging the value of one variable to another 
    y = 500;
    x = y; // Now value of x is 500 not 1999

// copy values to empty variables
    z = y; // Assigning the value of y to variable z
printf("variable X value is: %d \n", x);
printf("Variable Y value is:  %d\n", y);
printf("Variable Z value is: %d\n");
    return 0;
}