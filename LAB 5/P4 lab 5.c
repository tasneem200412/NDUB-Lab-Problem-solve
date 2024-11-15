/*4: Grade Classification

Objective: Classify a student's grade based on marks using relational operators.

Instructions: Write a C program that prompts the user to enter their marks (0-100).

Use relational operators to determine the grade category:

A: 90 or above

B: 80 to 89

C: 70 to 79

D: 60 to 69

F: Below 60

Store the result as an integer code representing the grade and print it.*/

#include <stdio.h>

int main()

{
    int A,B,C,D,F,std_marks;

    printf("Enter any student mark: ");

    scanf("%d",&std_marks);

    A = std_marks >=90;

    B = std_marks <=89 && std_marks >=80;

    C = std_marks <=79 && std_marks >=70;

    D = std_marks <=69 && std_marks >=60;

    F = std_marks < 60;

    printf("Whether the students gets grade A = %d\n",A);

    printf("Whether the students gets grade B = %d\n",B);

    printf("Whether the students gets grade C = %d\n",C);

    printf("Whether the students gets grade D = %d\n",D);

    printf("Whether the students gets grade F = %d\n",F);

    return 0;

}
