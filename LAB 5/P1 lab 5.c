/*1: Basic Comparison
Objective: Compare two integers and print the result using relational operators.
Instructions: Write a C program that prompts the user to enter two integers.
Use relational operators to compare these integers and store the result in a variable.

Print

the results of the comparisons:

Whether
the first integer is greater than the second.

Whether
the first integer is less than the second.

Whether
the two integers are equal.*/



#include <stdio.h>

int main()

{

    int x,y,a,b,c;

    printf("Enter Any Two integers: ");

    scanf("%d%d",&x,&y);


    a = x > y;

    b = x < y;

    c = x == y;

    printf("Whether the first integer is Greater than the second %d\n",a);

    printf("Whether the first integer is smaller than the second %d\n",b);

    printf("Whether the first integer is equal to the second integer %d\n",c);

    return 0;


}
