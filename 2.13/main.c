//C Program to Check Armstrong Number

#include <stdio.h>
#include <math.h>

int main()
{
    int d,n,res=0;
    printf("enter a number of digits of a number you want to enter: ");
    scanf("%d",&d);
    printf("enter a number: ");
    scanf("%d",&n);

    int N=n;

    while(n>0)
    {
        int count = n%10;//to count number of digits
        res=res+pow(count,d);
        n=n/10;

    }
    n=N;
    if(res==n)
        printf("armstrong number");
    else
        printf("not a prime number");

    return 0;
}
