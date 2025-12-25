#include <stdio.h>

int main(void)
{
    // initialize variable
    int n, reversed,digit; 
    // Get input and store
    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    reversed = n % 10;
    digit = n / 10;
    printf("The reversal is %d%d", reversed,digit);
    //print out input


}