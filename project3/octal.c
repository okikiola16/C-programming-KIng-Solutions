#include <stdio.h>

int main(void)
{
    // Initialization
    int num, d1, d2, d3, d4, d5, octal;

    // Get input store and manipulate
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);
    
    d1 = num % 8;
    num = num / 8;

    d2 = num % 8;
    num /= 8;

    d3 = num % 8;
    num /= 8;

    d4 = num % 8;
    num /= 8;

    d5 = num % 8;
    num /= 8;

    printf("In octal, your number is: %5d%d%d%d%d", d5,d4,d3,d2,d1); 


}
// Credit to deepseek for giving me an idea on how to go about it