#include <stdio.h>

int main(void)
{

    int tens , ones ;
    printf("Enter a two digit number: ");


    scanf("%1d%1d", &tens, &ones);
    switch (tens)
    {
        case 0: printf("You entered the number "); break;
        case 1: printf("You entered the number "); break;
        case 2: printf("You entered the number "); break;
        case 3: printf("You entered the number "); break;   
    }
    switch (ones)
    {
        case 0: printf("zero\n"); break;
        case 1: printf("one\n"); break;
        case 2: printf("two\n"); break;
        case 3: printf("three\n"); break;   
    }   
    printf("You entered the number %d%d\n", tens, ones);
    return 0;

}