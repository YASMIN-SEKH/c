//C Program to Check whether the input number is a Neon Number
#include <stdio.h>

int main()
{
    //input number
    int n;
    printf("enter number: ");
    scanf("%d",&n);

    //first square
    int square=n*n;
    //now add digit
    int result=0;
    while(square!=0)
    {
        int digit=square%10;
        result=result+digit;
        square=square/10;
    }
    if (result==n)
        printf("neon number");
    else
        printf("non neon number");


    return 0;
}
