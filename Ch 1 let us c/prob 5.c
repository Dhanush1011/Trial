#include <stdio.h>
main()
{
    float l,b,r,ar,pr,ac,pc;
    printf("Enter dimensions in the Order l b r : ");
    scanf("%f %f %f",&l,&b,&r);
    ar=l*b;
    pr=(l+b)*2;
    ac=3.14*r*r;
    pc=2*3.14*r;
    printf("Area of Rectangle = %f",ar);
    printf("\nPerimeter of Rectangle = %f",pr);
    printf("\nArea of Circle = %f",ac);
    printf("\nPerimeter of Circle = %f",pc);
    return 0;
}
