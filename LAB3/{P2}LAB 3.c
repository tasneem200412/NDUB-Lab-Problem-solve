/*Write a C program to convert specified days into
years, weeks and days. Ignore leap year.



Sample Input :

Number of days : 1329

Sample Output :

Years: 3

Weeks: 33

Days: 3*/

#include <stdio.h>

int main()

{
    int days,weeks,years;

    printf("Enter any days: ");

    scanf("%d",&days);

    years=days/365;

    days=days%365;

    weeks=days/7;

    days=days%7;

    printf("years:weeks:days = %d:%d:%d",years,weeks,days);

    return 0;




}
