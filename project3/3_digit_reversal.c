#include <stdio.h>
int main(void)
{
    // Init variable
    int n, hundred_digit, ten_digit, unit_digit;
    // Ask for input, store ad reverse
    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    unit_digit = n % 10;          // Last digit
    ten_digit = n / 10 % 10;      // Middle digit  
    hundred_digit = n / 100;      // First digit
printf("The reversal is %d%d%d", unit_digit, ten_digit, hundred_digit);
}