//C Program to Display Prime Numbers Between Intervals
#include <stdio.h>

int main()
{
    int firstnum, lastnum;
    printf("enter intervals:\n");
    printf("enter first interval:");
    scanf("%d",&firstnum);
    printf("enter last intervals:");
    scanf("%d",&lastnum);

    for(int i=firstnum; i<=lastnum; i++)
    {
        int c=1;
        for(int j=2; j<=i/2; j++)
        {
            if(i%j==0)
                c=0;

        }
        if(c==1)
          printf("%d ",i);
    }

    return 0;
}
