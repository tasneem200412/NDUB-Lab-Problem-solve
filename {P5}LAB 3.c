/*Write a program to calculate the sum of the first and the
second last digit of a 5 digit number entered from the keyboard.*/

#include <stdio.h>

int main()

{

    int d1,d2,d3,d4,d5,n; //declaring variables

   //d5=last digit d4=fouuth digit d3=thirth digit d2=second digit d1=first digit

    printf("Enter Any 5 digit number: \n"); // 10000 < n < 99999

    scanf("%d",&n);


    d5 = n%10;

    n =  n/10;

    d4 = n%10;

    n =  n/10;

    d3 = n%10;

    n  = n/10;

    d2 = n%10;

    n  = n/10;

    d1 = n%10;

    int sum = d1 + d4;

    printf("the Sumination first and second last digit= %d",sum);

    return 0;

}
