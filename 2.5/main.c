//C Program to Calculate Sum of Natural Numbers

#include <stdio.h>

int main()
{
    printf("this program calculates sum of natural numbers\nnatural numbers are generally numbers that are positive\nwhich is numbers that are greater than zero\n\nenter two numbers");
    int a,b;

    printf("\n\nenter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);

    if((a&&b)>0)
    {
        printf("\n\n2sum: %d+%d=%d",a,b,a+b);
    }else
    printf("invalid input");
    return 0;
}
