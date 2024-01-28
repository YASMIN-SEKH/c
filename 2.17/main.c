//C Program to Check Whether a Number is a Palindrome or Not
#include <stdio.h>

int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);

    //copy valu of num;
    int reverse=0;
    int N=n;

    while(N>0)
    {
        int check=N%10;
        reverse=reverse*10+check;
        N=N/10;
    }
if(reverse==n)
    printf("palindrome");
else
    printf("not palindrome");

    return 0;
}
