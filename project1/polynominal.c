#include <stdio.h>


int main(void)
{
    // Init core Variables

    int x5, x4, x3, x2, x, compute;
    // Get the value of x
    printf("what is the value of x: ");
    scanf("%i", &x);

    x5 = x * x * x * x * x;
    x4 = x * x * x * x;
    x3 = x * x * x; 
    x2 = x * x;  

    compute = 3*x5 + 2*x4 - 5*x3 - x2 + 7*x -6;

    printf("The answer is : %i\n", compute);

    return 0; 


}