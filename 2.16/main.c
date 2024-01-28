//c program to reverse a number

#include <stdio.h>

int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);

    printf("reversed number:");
    while(n>0)
    {
        printf("%d",n%10);
        n=n/10;
    }

    return 0;
}
