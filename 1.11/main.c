//C Program to Add Two Complex Numbers

#include <stdio.h>
#include <math.h>

//z=a+ib
//i = pow(-1,0.5)

//to add two complex numbers
// 9i+2i=11i
/* 1. c1=num1/pow(-1,0.5)
   2. c2=num2/pow(-1,0.5)
   3. (c1+c2)*pow(-1,o.5)

   */

int main()
{
    int real1,image1,real2,image2;
    printf("enter two complex num:\ncomplex number, z=a+ib\nwhere a is the real part and b is the imaginary part\nenter real part for first complex number: ");
    scanf("%d",&real1);
    printf("enter imaginary part for first complex number: ");
    scanf("%d",&image1);
    printf("the first complex number you have entered is %d+%di\n",real1,image1);

    printf("enter real part for second complex number: ");
    scanf("%d",&real2);
    printf("enter imaginary part for second complex number: ");
    scanf("%d",&image2);
    printf("the second complex number you have entered is %d+%di\n",real2,image2);

    printf("sum of two complex number is %d+%di",real1+real2,image1+image2);
    return 0;
}
