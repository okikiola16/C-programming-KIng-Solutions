#include <stdio.h>

#define RADIUS 10
#define FRACTION (4.0f / 3.0f)
int main(void)
{
    float pi = 3.142, volume;
    float r3 = RADIUS * RADIUS * RADIUS;
    volume = FRACTION * pi * r3;
    printf("volume of a a sphere with radius 10: %f\n", volume);

    return 0;   
}