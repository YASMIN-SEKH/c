//C Program to Find Compound Interest

#include <stdio.h>
#include <math.h>

int main()
{
//C Program to Find Compound Interest
/*

Compound Interest = A – P
Where,

A = total amount of money after compounding term.
P = initial principal amount
Compound Interest = pow(P(1 + r/n),nt) -P

Where,

P = initial principal amount
r = annual interest rate
n = number of times interest is compounded
t = number of years
*/

    int c,a,p,r,n,t,x;

    printf("to calculate compound interest:\n");

    printf("enter principal amount: ");
    scanf("%d",&p);
    printf("enter rate of interest: ");
    scanf("%d",&r);
    printf("enter number of times interest is compounded: ");
    scanf("%d",&n);
    printf("enter time period: ");
    scanf("%d",&t);

    x=p*(1 + r/n);
    int y=n*t;
    a=pow(x,y);
    c=a-p;

    printf("compound interest = %d",c);
    return 0;
}
