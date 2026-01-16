#include <stdio.h>

int main(void)
{
    int area;
    printf("Enter a area code: ");
    scanf("%d", &area);

    switch (area) {
        case 229:
        printf("Albany");
        break;
        case 404:
        printf("Atlanta");
        break;
        case 478:
        printf("Macon");
        break;
        case 706:
        printf("Columbus");
        break;
        case 762:
        printf("Augusta");
        break;
        case 770:
        printf("Atlanta suburbs");
        break;
        case 912:
        printf("Savannah");
        break;
        default:
        printf("Unknown area code");
    }
    return 0;
}