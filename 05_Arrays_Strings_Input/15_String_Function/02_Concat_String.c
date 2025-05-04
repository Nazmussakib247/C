#include <stdio.h>
#include <string.h>

int main(){
    char string1[100] = "My Name is ";
    char string2[] = "Nazmus Sakib";
    char string3[] = " My nickname is Shawon";

    //Concating string
    strcat(string1, string2);
    strcat(string1,  string3);

    //Printing string together
    printf("%s", string1);
    return 0;

}