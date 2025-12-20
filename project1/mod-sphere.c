#include <stdio.h>

#define FRACTION (4.0f / 3.0f)
int main(void)
{
    float pi = 3.142, volume, radius, r3;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    r3 = radius * radius * radius;
    volume = FRACTION * pi * r3;
    printf("volume of the sphere is: %f\n", volume);

    return 0;   
}