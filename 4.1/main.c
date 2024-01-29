//C Program to Check Prime Number By Creating a Function
#include <stdio.h>
int n;

int prime (int n)
{
int c=1;

    for(int i=2;i<=n/2;i++)
    {
        if (n%i==0)
            c=0;
    }
    if(c==1)
        printf("%d is prime",n);
    else
        printf("%d is non prime",n);

}
int main()
{
    printf("enter a number: ");
    scanf("%d",&n);
    prime(n);

    return 0;
}
