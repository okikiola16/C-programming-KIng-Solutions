#include <stdio.h>

#define TAX (5.0f / 100.0f)
int main(void)
{
    float dollar, ini_answer, final_answer; 
    printf("Enter an amount: ");
    scanf("%f", &dollar);

    ini_answer = dollar * TAX;
    final_answer = ini_answer + dollar;

    printf("With tax added: %2f\n", final_answer);
    return 0;
}