#include <stdio.h>


int main(void)
{
    // Init core Variables

    int x, compute;
    // Get the value of x
    printf("what is the value of x: ");
    scanf("%i", &x);

    // Formula ((((3x + 2)x – 5)x – 1)x + 7)x – 6

    compute = ((((3*x + 2)* x - 5)* x-1)* x+7)* x-6;
    printf("For x = %d, the answer is: %d\n", x, compute);

    return 0;
    

}
