#include <stdio.h>

int shadow(void);
int main(void)
{
    int i;
    i = 10;

    while (i > 0)
    {
        printf("T minus %d and counting\n", i);
        --i;
    }
    shadow();
}


int shadow(void)
{
    int i;
    for (i = 10; i > 0; --i)
    printf("T minus %d\n", i);
}