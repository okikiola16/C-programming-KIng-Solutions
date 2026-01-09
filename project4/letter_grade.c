#include <stdio.h>

int main (void)
{
    int grade, grader;
    do {
    printf("Enter grade: ");
    scanf("%d", &grade);
    }
    while (grade < 0 && grade > 100);
   
    grader = grade / 10;
    switch (grader)
    {
        case 10:
        case 9: printf("A\n");
                break;
        case 8: printf("B\n");
                break;
        case 7: printf("C\n");
                break;
        case 6: printf("D\n");
                break;
        default: printf("F\n");
                 break;
    }
}