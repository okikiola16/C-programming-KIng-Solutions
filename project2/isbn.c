#include <stdio.h>

int main(void)
{
    // Init variable
    int prefix, identifier, code, number, digit;
    // Get ISBN
    printf("Enter ISBN(xxx-x-xxx-xxxxx-x) : ");
    scanf("%3d-%1d-%3d-%5d-%1d", &prefix, &identifier, &code, &number, &digit);

    // Printout user ISBN details
    printf("GSI prefix: %d\n", prefix);
    printf("Group identifier: %d\n", identifier);
    printf("Publisher code: %d\n", code);
    printf("Item number: %d\n", number);
    printf("Check digit: %d\n", digit);
}