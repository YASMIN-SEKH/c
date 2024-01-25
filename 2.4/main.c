//C Program to Find Largest Number Among Three Numbers

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    printf("enter third number: ");
    scanf("%d",&c);
// another solution is using ternary operator (a>b)?((a>c)?a:c):((b>c)?b:c)
    if(a>b)
    {
        if(a>c)
            printf("%d is maximum",a);
        else
            printf("%d is maximum",c);

    }
    else
    {
        if(b>c)
            printf("%d is maximum",b);
        else
            printf("%d is maximum",c);
    }


    return 0;
}
