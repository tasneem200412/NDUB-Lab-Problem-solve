
/*The sum of ages of a Father and his daughter is 80 years.
Father’s age is four times the age of the daughter. What are their ages?*/



#include <stdio.h>

int main()
{
    int D, F;

    // Solve for D (daughter's age)
    D = 80 / 5;  // D = 80 / (4 + 1)

    // Solve for F (father's age)
    F = 4 * D;

    // Output the ages
    printf("Father's age: %d years\n", F);
    printf("Daughter's age: %d years\n", D);

    return 0;
}
