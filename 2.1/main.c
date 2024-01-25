//C Program to Check Whether a Number is Positive, Negative, or Zero

#include <stdio.h>

int main()
{
    int n;
    printf("enter number: ");
    scanf("%d",&n);

    if(n>0)
    printf("%d is positive\n",n);
    if(n<0)
    printf("%d is negative\n",n);
    else if(n=0)
    printf("%d is zero\n",n);



    return 0;
}
