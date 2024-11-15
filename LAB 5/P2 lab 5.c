/*2: Temperature Category
Objective: Determine the temperature category using arithmetic operations and relational operators.
Instructions:
Write a c program that prompts the user to enter a temperature in Celsius.

Use relational operators to determine and print the temperature category:
Cold: Below 15°C


Warm: Between 15°C and 25°C (inclusive)


Hot: Above 25°C */
#include <stdio.h>

int main()

{

    int cold,warm,hot,temperature;

    printf("Enter any temperature (celcius): ");

    scanf("%d",&temperature);

    cold = temperature < 15; //Cold = below 15*C

    warm = temperature >= 15 && temperature <= 25; //Warm : Between 15°C and 25°C

    hot = temperature > 25; //Hot : Above 25°C

    printf("Whether the temperature is COLD %d\n",cold);

    printf("Whether the temperature is WARM %d\n",warm);

    printf("Whether the temperature is HOT %d\n",hot);

    return 0;



}
