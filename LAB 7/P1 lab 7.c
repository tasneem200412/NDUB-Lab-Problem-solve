/*1.Write a program that reads an integer from the user and determines if the number is odd or even*/

#include <stdio.h>

int main()

{
    int any_num;

    printf("Enter any number: ");

    scanf("%d",&any_num);

    if(any_num %2 == 0)
    {
        printf("The number is EVEN");

    }

    if(any_num %2 == 1)
    {

        printf("The number is ODD");
    }

    return 0;
}

