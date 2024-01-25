//C Program to Make a Simple Calculator

#include <stdio.h>

int main()
{
    int a,b;
    printf("enter two numbers:\n");
    printf("enter first numbers: ");
    scanf("%d",&a);
    printf("enter second numbers: ");
    scanf("%d",&b);

    char op;
    printf("enter operator(+,-,*,/): ");
    scanf(" %c",&op);

    switch(op)
    {
    case '+' :
        printf("%d+%d=%d",a,b,a+b);
        break;
    case '-' :
        printf("%d-%d=%d",a,b,a-b);
        break;
    case '*' :
        printf("%d*%d=%d",a,b,a*b);
        break;
    case '/' :
        printf("%d/%d=%d",a,b,a/b);
        break;
    default:
        printf("invalid operand");
    }
    return 0;
}
