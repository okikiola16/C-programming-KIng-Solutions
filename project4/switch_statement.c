#include<stdio.h>

int main(void)
{
    int grade;

    printf("Enter your grade: ");
    scanf("%d", &grade);

    switch (grade) 
    {
        case 5: printf("Excellent");
                break;
        case 4: printf("Very Good");
                break;
        case 3: printf("Good");
                break;
        case 2: printf("Average");
                break;
        case 1: printf("Failed");
                break;
        default: printf("Illegal grade");
                break;
    }
    
    return 0;
}