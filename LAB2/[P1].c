/*There were P number of people in a village in the last year. in this year, Q number of people moved in and
R number of people moved out of the village. how many people are there in this year?*/

#include <stdio.h>

int main()

{

    int P,Q,R;

    printf("Enter number of people in the village: ");

    scanf("%d",&P);



    printf("Enter the number of people moved in: ");

    scanf("%d",&Q);



    printf("Enter the number of Moved out from the village: ");

    scanf("%d",&R);

    int sum=(P+Q)-R;

    printf("%d are people in this village",sum);

    return 0;
}
