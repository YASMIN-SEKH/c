//C Program for Area And Perimeter Of Rectangle

#include <stdio.h>

int main()
{
    printf("C Program for Area And Perimeter Of Rectangle:\n\n");

    int l,b;
    printf("length Of Rectangle:");
    scanf("%d",&l);
    printf("breadth Of Rectangle:");
    scanf("%d",&b);

    printf("\n\nArea Of Rectangle = %d*%d\nArea Of Rectangle = %d\n\n",l,b,l*b);
    printf("Perimeter Of Rectangle = 2*(%d+%d)\nPerimeter Of Rectangle = %d\n\n",l,b,2*(l+b));

    return 0;
}
