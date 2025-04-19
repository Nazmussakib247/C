// Creating variable of different data types 
#include <stdio.h>
int main(){
    int items = 50;
    float cost_per_item =9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';

    // Printing variable:
    printf("Number of Itms: %d\n", items);
    printf("Cost per Item: %.2f %c\n", cost_per_item, currency);
    printf("Total cost: %.2f %c", total_cost, currency);
    return 0;
}

