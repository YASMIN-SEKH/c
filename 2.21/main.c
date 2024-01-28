//C Program to Find All Factors of a Natural Number
#include <stdio.h>

int main()
{
    int n;
    printf("enter a natural number: ");
    scanf("%d", &n);

    for(int i=2; i<=n; i++)
    {
        if(n%i==0)
            printf("%d ",i);
    }

    return 0;
}
