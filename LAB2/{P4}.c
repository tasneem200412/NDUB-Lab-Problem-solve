//M and R together have 8500 Taka. M has 480 Taka less than R. how much money does M and R each has?

#include <stdio.h>

int main()
{
    // Declare variables for M and R
    int M, R;

    // Calculate R first
    R = (8500 + 480) / 2;

    // Calculate M using the value of R
    M = R - 480;

    // Output the results
    printf("M has %d Taka and R has %d Taka.\n", M, R);

    return 0;
}
