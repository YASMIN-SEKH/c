//C Program to Check Whether Number is Even or Odd

#include <stdio.h>

int main()
{
    int n;
    printf("enter number: ");
    scanf("%d",&n);

    if(n%2==0)
    printf("%d even\n",n);
    else
    printf("%d is odd\n",n);
    return 0;
}
