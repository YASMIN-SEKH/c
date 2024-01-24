//C Program to Swap Two Number

#include <stdio.h>

int main()
{
    printf("enter two numbers:\n");
    int a,b,c;
    scanf("%d%d", &a, &b);

    c=b;
    b=a;
    a=c;

    printf("swapping two numbers:\n%d %d",a,b);

    return 0;
}
