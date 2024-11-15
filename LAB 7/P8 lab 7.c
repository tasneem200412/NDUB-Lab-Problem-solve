//Write a program that takes an integer input and prints its absolute value
#include <stdio.h>
int main()

{
    int any_num;

    printf("Enter any number: ");

    scanf("%d",&any_num);

    if(any_num >=0)
    {
        printf("%d The number is absoulete",any_num);
    }

    if(any_num <0)
    {
        any_num = -any_num;

        printf("%d The number is absoulete",any_num);
    }


    return 0;

}
