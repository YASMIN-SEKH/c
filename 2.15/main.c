#include<stdio.h>
#include<math.h>

int main ()
{
    int firstnum, lastnum;
    printf("enter intervals:");
    printf("enter first number: ");
    scanf("%d",&firstnum);
    printf("enter last number: ");
    scanf("%d",&lastnum);

    int a,b,c,arm=0;
    for(int i=firstnum; i<=lastnum; i++)
    {
        //now counr number of digits
    //also then do pow of num % 10 with num of digits
    //for this we need to copy the value of firstnum everytime this will change as we run it inside loop so will do the following

    //so we will assign value of i in two variables and then use it
    a=i;
    b=i;

    //count number of digits and then store it in a variable then use that in next step
    while(a!=0)
    {
        a=a/10;
        ++c;
    }
    //now check if armstrong
    //if armstrong then print value
    while(b!=0)
    {
        int n=b%10;
        int pow=1;
        //
        for(int i=1; i<=c; i++)
        {
            pow=pow*n;

        }
        arm=arm+(pow);
            b=b/10;

    }
    if(arm==i)
    {
        printf("%d ",i);
    }
    arm=0;
    c=0;


    }





    return 0;

}
