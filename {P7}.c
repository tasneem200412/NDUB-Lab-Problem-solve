/*Interchange the values of two variables using only 2
variables and and it also must be reflected in the memory location.*/


#include <stdio.h>

int main()


{
    int a,b;

    printf("Enter the any number in 'a' variable: ");

    scanf("%d",&a);

    printf("Enter the any number in 'b' variable: ");

    scanf("%d",&b);



    a =(a+b)-a;

    b =(a+b-1)-b;

    //a = a + b:
    //b = a - b
    //a = a - b



    printf("'a'=%d(after change)\n'b'=%d(after change)\n ",a,b);

    return 0;


}
