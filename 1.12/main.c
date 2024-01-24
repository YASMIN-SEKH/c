//C Program to Print Prime Numbers From 1 to N

#include <stdio.h>

int main()
{
    int n;
    printf("Program to Print Prime Numbers From 1 to N\nenter N: ");
    scanf("%d",&n);


    for(int i=2; i<=n; i++)
    {
        int c=1; //for prime
        for(int j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                c=0;//non-prime
                break;
            }
        }
        if(c==1)
        {
            printf("%d ",i);
        }


    }

    return 0;
}


