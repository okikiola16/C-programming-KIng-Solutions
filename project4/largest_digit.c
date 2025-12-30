#include <stdio.h>

int main(void)
{
    int first, second, third, fourth,large_1, large_2, small_1, small_2, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &first, &second, &third, &fourth);

    if(first < second)
    {
        small_1 = first;
        large_1 = second;
    }
    else 
    {
        small_1 = second;
        large_1 = first;
    }

    if (third < fourth)
    {
        small_2 = third;
        large_2 = fourth;
    }
    else 
    {
        small_2 = fourth;
        large_2 = third;
    }

    if (large_1 < large_2)
    {
        largest = large_2;
    }
    else{
        largest = large_1;
    }
    if (small_1 < small_2)
    {
        smallest = small_1;
    }
    else 
    {
        smallest = small_2;
    }
    
    printf("Largest: %d\n", largest);
    printf("Smallest: %d", smallest);

    return 0;
}