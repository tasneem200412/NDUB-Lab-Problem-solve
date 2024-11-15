/*4.Create a program that takes a person's age as input and checks if they are eligible to vote.
(Assume the voting age is 18)*/
#include <stdio.h>

int main()

{   int age;

    printf("Enter any person's age: ");

    scanf("%d",&age);

    if(age >= 18)
    {
        printf("The person is elgible for vote");
    }

    if(age < 18)
        {
            printf("The person is not eligible for vote");
        }

    return 0;

}
