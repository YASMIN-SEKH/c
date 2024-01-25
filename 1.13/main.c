//C Program to Find Simple Interest

#include <stdio.h>

int main()
{
    //simple interest i=p*r*t/100

    int p,r,t;
    printf("to calculate simple interest:\n");

    printf("enter principal amount: ");
    scanf("%d",&p);
    printf("enter rate of interest: ");
    scanf("%d",&r);
    printf("enter time period: ");
    scanf("%d",&t);

    printf("simple interest = (%d*%d*%d)/100\nsimple interest = %d",p,r,t,p*r*t/100);
    return 0;
}
