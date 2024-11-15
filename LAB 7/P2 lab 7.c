/*2. Create a program that takes an integer input and prints
whether the number is positive, negative, or zero*/

#include <stdio.h>

int main()

{
    int any_num;

    printf("Enter any number: ");

    scanf("%d",&any_num);

    if(any_num <=-1)

    {

        printf("The number is negative");
    }

    if(any_num >=1)

    {

        printf("The number is positive");
    }


    if(any_num == 0)

    {
        printf("The number is Zero");

    }

    return 0;

}
