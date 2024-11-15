/*Create a program that reads a student's marks (out of 100)
and classifies the grade as follows:
- A (90 - 100)- B (80 - 89)- C (70 - 79)- F (below 70)*/

#include <stdio.h>

int main()

{

    int std_marks;

    printf("Enter students mark: ");

    scanf("%d",&std_marks);

    if(std_marks >=90 && std_marks <=100){

      printf("The student got A grade");
    }

    if(std_marks>=80 && std_marks<=89)
    {
        printf("The student got B grade");

    }

    if(std_marks>=70 && std_marks<=79)
    {
        printf("The student got C grade");
    }

    if(std_marks<70)
    {
        printf("The student got F grade");
    }

    return 0;

}




