/*Create a program that reads three angles of a triangle
from the user and checks if the angles form a valid triangle. (The sum of the
three angles must be 180 degrees)*/

#include <stdio.h>

int main()

{

    int ang1,ang2,ang3;

    printf("Enter three angle: ");

    scanf("%d%d%d",&ang1,&ang2,&ang3);

    if(ang1 + ang2 + ang3 == 180)
    {

        printf("The sum of three angles %d,%d,%d Creates a valid triangle %d\n",ang1,ang2,ang3,ang1+ang2+ang3);

    }


    if(ang1 + ang2 + ang3 != 180)
    {

        printf("The sum of three angles %d,%d,%d doesn't Creates a valid triangle %d\n",ang1,ang2,ang3,ang1+ang2+ang3);

    }

    return 0;
}
