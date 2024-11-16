/*10. Create a program that takes a single character as input
and checks if it is a digit (0-9), an uppercase letter (A-Z), or a lowercase
letter (a-z).*/

#include <stdio.h>

int main()

{
    char any_char;

    printf("Enter any character: ");

    scanf("%c",&any_char);

    if(any_char >= 'A' && any_char <= 'Z')

    {

     printf("The given  character '%c' is uppercase\n",any_char);

    }

    if(any_char >= 'a' && any_char <= 'z')

    {

        printf("The given  character '%c' is lowercase\n",any_char);

    }

    if(any_char >= '0' && any_char <= '9')

    {

        printf("The given  character '%c' is digit\n",any_char);
    }

    return 0;

}
