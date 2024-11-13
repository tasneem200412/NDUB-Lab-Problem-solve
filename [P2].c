/*A butcher sells beef at B Taka per KG and mutton at C taka per kg.
if we buy M kg of beef and N kg of mutton, and pay X Taka, how much will be the change?*/

#include <stdio.h>

int main() {
    float B, C, X;
    int M, N;

    // Input the values
    scanf("%f %f %d %d %f", &B, &C, &M, &N, &X);

    // Calculate total cost and change
    float total_cost = (M * B) + (N * C);
    float change = X - total_cost;

    // Output the change
    printf("%.2f\n", change);

    return 0;
}
