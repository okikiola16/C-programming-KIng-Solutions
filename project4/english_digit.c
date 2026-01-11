#include <stdio.h>

int main(void)
{
    // Init variables 
    int tens, unit;
    // Get two-digt number
    printf("Enter a two digit number: ");
    // Store using scanf
    scanf("%d%d", &tens, &unit);
    // Algorithm goes here
    switch (tens)
    {
        case 9: printf("Ninety-");
            break;
        case 8: printf("Eighty-");
            break;
        case 7: printf("Seventy-");
            break;
        case 6: printf("Sixty-");
            break;
        case 5: printf("Fifty-");
            break;
        case 4: printf("Forty-");
            break;
        case 3: printf("Thirty-");
            break;
        case 2: printf("Twenty-");
            break;
        default: printf("i don't know ");
        break;
    }
    switch (unit)
    {
        case 9: printf("nine");
            break;
        case 8: printf("eight");
        break;
        case 7: printf("seven");
        break;
        case 6: printf("six");
        break;
        case 5: printf("five");
        break;
        case 4: printf("four");
        break;
        case 3: printf("three");
        break;
        case 2: printf("two");
        break;
        case 1: printf("one");
        break;
        default: printf("yet");
        break;
    }
    // Print out the value
    return 0;

}