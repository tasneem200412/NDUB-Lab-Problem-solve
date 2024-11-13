/*Mr. X’s monthly salary is P Taka. Every month he spends A Taka for house rent,
B taka for household expenses. He saves the remaining money in a bank.
What amount of money does Mr. X save in a year?*/



#include <stdio.h>

int main()
{
    float P, A, B;

    // Input salary, house rent, and household expenses
    printf("Enter Mr. X's monthly salary (P): ");
    scanf("%f", &P);

    printf("Enter the monthly house rent (A): ");
    scanf("%f", &A);

    printf("Enter the monthly household expenses (B): ");
    scanf("%f", &B);

    // Calculate monthly savings
    float monthly_savings = P - (A + B);

    // Calculate yearly savings
    float yearly_savings = monthly_savings * 12;

    // Output the yearly savings
    printf("Mr. X saves %.2f Taka in a year.\n", yearly_savings);

    return 0;
}
