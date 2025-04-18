# include <stdio.h>

int main (){
    int myNumber = 100;
    float myNumber1 = 200;
    char *myText = "Hello";

//Printing values and specifying format
    printf("%d\n", myNumber);
    printf("%f\n", myNumber1);
    printf("My C programing course marks is %f\n", myNumber1);

    //Printing different type in a single printf() function
    printf("%s my codeforce point is %f\n", myText, myNumber1);

    //Printing value without variable
    printf("Helloo, my age is %d\n", 23);
    
    return 0;
}