#include <stdio.h>

int main(void)
{
    // Init variables
    int item, day, month, year;
    float unit_Price;
    // Get input and storing in the appropriate variable
    printf("Enter item number: ");
    scanf("%d", &item);

    printf("Enter unit price: ");
    scanf("%f$", &unit_Price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    // Printing out variable 
    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
    printf("%d\t%.2f\t%d/%d/%d", item, unit_Price, month, day, year);

}