/*5: Range Check
Objective: Check if a number falls within a specified range using relational operators.

Instructions: Write a C program that prompts the user to enter a number.


Use relational operators to check if the number is within the range of 10 to 50
(inclusive).


Print whether the number is "Within range" or "Out of range"
using integer codes.*/

#include <stdio.h>

int main()

{

    int any_num, within_range, out_of_range;


    printf("Enter any number that is within range of 10 to 50: ");

    scanf("%d",&any_num);

    within_range = any_num >= 10 && any_num <=50;

    out_of_range =  any_num < 10 || any_num > 50;

    printf("Whether the number %d is out of range %d\n", any_num, out_of_range);

    printf("Whether the number %d is within range %d\n", any_num, within_range);

    return 0;


}
