//C Program to Check Whether a Number is Prime or Not

#include <stdio.h>

int main()
{
    int n,i,c=0;
    //n=number
    //i=iterator for loop
    //c=to count factors

    //generally prime numbers are those numbers which have factors 1 and the number itself

    printf("enter number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }

    if(c==2)
        printf("%d is prime",n);
    else
        printf("%d is non-prime",n);
    return 0;
}
