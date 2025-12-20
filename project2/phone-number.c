#include <stdio.h>

int main(void)
{
    // Init Variables
    int area_code, exchange, line_number;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%3d) %3d-%4d", &area_code, &exchange, &line_number);

    printf("You entered %03d.%03d.%04d", area_code, exchange, line_number);

    return 0;

}