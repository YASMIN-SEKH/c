//C Program to Find Factorial of a Number

#include <stdio.h>

int main()
{
    printf("enter a number: ");
    int n,fact=1;
    scanf("%d",&n);

    for(int i=2; i<=n; i++)
    {
        fact = fact*i;
    }
    printf("%d! = %d",n,fact);
    return 0;
}
