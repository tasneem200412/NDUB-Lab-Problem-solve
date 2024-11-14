
/*[3] Write a C program to convert a given integer (in
days) to years, months and days, assumes that all months have 30 days and all
years have 365 days.


Sample Input :

Input no. of days: 2535


Sample Output:

6 Year(s)

11 Month(s)

15 Day(s)*/

#include <stdio.h>

int main()

{
    int days,months,years;

    printf("Enter any days: ");

    scanf("%d",&days);

    years=days/365;

    days=days%365;

    months=days/30;

    days=days%30;

    printf("years:months:days = %d:%d:%d",years,months,days);

    return 0;




}
