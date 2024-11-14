/*Write a C program to convert a given integer (in
seconds) to hours, minutes and seconds.
Sample Input :

Input seconds: 25300

Sample Output:

There are:

H:M:S - 7:1:40*/


#include <stdio.h>

int main()

{
    int seconds,minutes,hours;

    printf("Enter any seconds: ");

    scanf("%d",&seconds);

    hours=seconds/3600;

    seconds=seconds%3600;

    minutes=seconds/60;

    seconds=seconds%60;

    printf("Hours:minutes:seconds = %d:%d:%d",hours,minutes,seconds);

    return 0;




}
