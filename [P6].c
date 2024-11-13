/*The price of 2 cows and 3 goats together 98050 Taka.
the price of 1 goat is 6800 taka. what is the price of one cow?*/

#include <stdio.h>

int main()
{
    int price_of_goat = 6800;
    int total_price = 98050;
    int price_of_cow;

    // Calculate the total price of 3 goats
    int total_goat_price = 3 * price_of_goat;

    // Subtract the total price of goats from the total price to find the total price of cows
    int total_cow_price = total_price - total_goat_price;

    // Since there are 2 cows, divide by 2 to get the price of one cow
    price_of_cow = total_cow_price / 2;

    // Output the price of one cow
    printf("The price of one cow is %d Taka.\n", price_of_cow);

    return 0;
}
