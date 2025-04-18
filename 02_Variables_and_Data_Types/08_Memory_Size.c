#include <stdio.h>

int main(){
    int myint;
    float myfloat;
    double mydouble;
    char mychar;

    //Getting size of memory
    printf("%lu\n", sizeof(myint)); // Using %lu format specifier because its return long unspecified integer instead of %d, its more safer
    printf("%lu\n", sizeof(myfloat));
    printf("%lu\n", sizeof(mydouble));
    printf("%lu\n", sizeof(mychar));
    return 0;
}