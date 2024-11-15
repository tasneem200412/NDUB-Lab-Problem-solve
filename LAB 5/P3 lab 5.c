/*3: Determine Even or Odd
Objective:

Check if a number is even or odd using relational operators and arithmetic
operations.

Instructions:
Write a C program that prompts the user to enter an integer.
Use the
modulus operator and relational operators to determine and print whether the number is even or odd.*/

#include <stdio.h>

int main()

{
    int any_num,odd,even;

    printf("Enter any number: ");

    scanf("%d",&any_num);


    odd = any_num %2 != 0;

    even = any_num %2 ==0;

    printf("Whether the number is ODD %d\n",odd);

    printf("Whether the number is EVEN %d\n",even);

    return 0;


}


