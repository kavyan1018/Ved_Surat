#include<stdio.h>

void main()
{
    int num, month = 0, days = 0;

    printf("Enter number of days: ");
    scanf("%d", &num);


    month = num / 30;
    days = num % 30;

    printf("%d days are %d month(s) and %d day(s)\n", num, month, days);

}