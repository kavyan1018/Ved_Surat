#include<stdio.h>
#include<conio.h>

void main()
{

    int a, b, c;

    printf("Enter the First Number :");
    scanf("%d", &a);

    printf("Enter the Second Number :");
    scanf("%d", &b);

    printf("Enter the Third Number :");
    scanf("%d", &c);


    if (a > b && a > c)
    {
        printf("\n A is Max");
    }
    else if(b > c && b > a)
    {
        printf("\n B is max");
    }
    else{
        printf("\nC is Max");
    }

}