
/*Write a C program to calculate a bike’s
average consumption from the given total distance (integer value) traveled (in
km) and spent fuel (in liters, float number – 2 decimal point).


Sample Input :

Input total distance in km: 350

Input total fuel spent in liters: 5


Sample Output:

Average consumption (km/lt) 70.000*/

#include <stdio.h>

int main()

{


    float km,liters,average_consumption;   //declaring variables

    printf("\nEnter total distance of bike traveled (km): ");

    scanf("%f",&km);

    printf("\nEnter total fuels was in bike (liters): ");

    scanf("%f",&liters);


    average_consumption=km/liters;


    printf("average consumption=%.2f",average_consumption);

    return 0;

}
