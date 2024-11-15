//Write a program that takes an integer input and prints its absolute value
#include <math.h>

int main()

{
    int any_num;

    printf("Enter any number: ");

    scanf("%d",&any_num);

    printf("The absoulete value of %d is %d", any_num, abs(any_num));

    return 0;
}
