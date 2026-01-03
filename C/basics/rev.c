//  WAP to Interchange or SWAP two numbers using third 
// variable.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b, c;

    printf("Enter the Number :");
    scanf("%d", &a);

        printf("Enter the Number :");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;


    printf("\nAfter Swap %d", a);
    printf("\nAfter Swap %d", b);

}   