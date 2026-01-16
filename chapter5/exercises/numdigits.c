#include <stdio.h>

int main (void)
{
    int digits = 0, n, num;
    
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    num = n;
    do {
        num /= 10;
        digits ++;
    } while (num > 0);

    printf("The number %d has %d digit(s)", n, digits);
}