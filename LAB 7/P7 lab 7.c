/*Create a program that takes a single character as input and checks if it is an uppercase letter (A-Z)*/


#include <stdio.h>

int main()

{
    char letter;

    printf("Enter any letter ");

    scanf("%c",&letter);

    if(letter >= 'A' && letter <='Z')

    {
        printf("The letter '%c' is upper case",letter);

    }

    if(letter <'A' || letter >'Z')

     {
         printf("The letter '%c' is not upper case",letter);

     }

    return 0;

}



