//C Program to Multiply two Floating-Point Numbers

#include <stdio.h>

int main()
{
    float n1,n2;
    printf("enter two floating numbers:\n");
    scanf("%f%f",&n1,&n2);
    printf("%f*%f=%f\n%.1f(approx.)",n1,n2,n1*n2,n1*n2);
    return 0;
}
