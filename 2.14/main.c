#include<stdio.h>
#include<math.h>

int main ()
{
    int num, digit1, digit2, digit3, sum;

    for(int i=1; i<=1000; i++)
    {
        num=i;

        if(i<=9)
            printf("%d ",i);

        else
        {
            sum = pow(num%10,3)+pow((num%100-num%10)/10,3)+pow((num%1000-num%100)/100,3);
            if(sum==i)
                printf("%d ",sum);
        }
    }
}
