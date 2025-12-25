#include <stdio.h>

int main (void)
{
    // Initialize variables
    int number, reversed = 0;
    //Get user input and store in variables
    printf("Enter a number: ");
    scanf("%d", &number);
    //Reverse the number
    while (number != 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    printf("Reversed Number: %d\n", reversed);      
        
    //print out results
    return 0;

}