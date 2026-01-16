// Simple Program to print a table of squares using a while loop

#include <stdio.h>

int main (void)
{
    int i, n;

    printf("This program prints a table of square. \n");
    printf("Enter a number of entries in table: ");
    scanf("%d", &n);

    i = 0;
    while (i <= n)
    {
        printf("%2d%10d\n", i, i * i);
        i ++;
    }
    return 0;
}
