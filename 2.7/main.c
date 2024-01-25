//C Program to Check Leap Year

#include <stdio.h>
/*
in a leap year there is one extra day in feb
normal uear total days=365
leap year total days = 366

A leap year is a year with 366 days instead of 365; every 4 years in February one extra day is added. This is done because one year doesn't contain 365 days but 365.25 days. By adding once in the 4 years one extra additional day this problem is solved.

Any year that is divisible by 4 is a leap year, such as 2016, 2020, 2024, 2028.

Note: The above rule does not apply to century years.

*/
int main()
{
    printf("enter year (2010-2910): ");
    int y;
    scanf("%d",&y);

    if(y>=2010&&y<=2910)
    {
        if(y%4==0)
            printf("%d is a leap year",y);
        else
            printf("%d is not a leap year",y);
    }

    else
        printf("invalid input");


    return 0;
}
