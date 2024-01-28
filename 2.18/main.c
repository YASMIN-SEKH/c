//C Program to Check Whether a Number is Prime or Not
#include <stdio.h>

int main()
{
    int n,c=1;
    printf("enter a number : ");
    scanf("%d",&n);

    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
            c=0;

    }
    if(c==0)
        printf("non-prime");
    else
        printf("prime");


    return 0;
}
