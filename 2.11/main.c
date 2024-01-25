//C Program to Print Fibonacci Series

#include <stdio.h>

void fibo(int n);

int main()
{
    //printf("Hello world!\n");

    int n; //last term
    printf("enter last term: ");
    scanf("%d",&n);
    fibo(n);


    return 0;
}

void fibo(int n)
{
    int a=0,b=1,sum;
    if(n>=1)
        printf("%d ",a);
    if(n>=2)
        printf("%d ",b);
    for(int i=3;i<=n;i++)
    {
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;

    }
}
