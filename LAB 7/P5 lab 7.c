/*5.Write a program that takes an integer input
and checks if it is divisible by both 3 and 5*/

#include <stdio.h>

int main()

{
    int any_num;

    printf("Enter any number ");

    scanf("%d",&any_num);

    if(any_num %3 == 0 && any_num %5 == 0)

    {
       printf("The number is divisible by Both 3 and 5");
    }

    if(any_num %3 != 0 && any_num %5 !=0)

    {
        printf("The number is not divisible by Both 3 and 5");
    }

    return 0;

}
