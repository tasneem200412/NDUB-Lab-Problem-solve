/*Write a program
that reads two integers and prints the larger of the two numbers*/


#include <stdio.h>

int main()

{
    int num1,num2;

    printf("Enter first number: ");

    scanf("%d",&num1);

    printf("Enter second number: ");

    scanf("%d",&num2);

    if(num1 < num2)
    {

        printf("%d is larger than %d",num2,num1);

    }

    if(num1 > num2)
    {

        printf("%d is larger than %d",num1,num2);

    }

    return 0;
}
