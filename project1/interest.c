#include <stdio.h>

int main(void)
{
    float loan, interest, payment, irate;
    float b1, b2, b3; // balances after each payment
    
    printf("Enter amount of Loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    irate = interest / 100 / 12;

    // Month 1
    b1 = loan + loan * irate - payment;
    
    // Month 2
    b2 = b1 + b1 * irate - payment;
    
    // Month 3
    b3 = b2 + b2 * irate - payment;
    
    printf("Balance remaining after first payment: %.2f\n", b1);
    printf("Balance remaining after second payment: %.2f\n", b2);
    printf("Balance remaining after third payment: %.2f\n", b3);

    return 0;
}