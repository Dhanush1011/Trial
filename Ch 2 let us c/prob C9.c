#include <stdio.h>
main()
{
     float l,b,ar,pr;
     printf("Enter the length and breadth of Rectangle = ");
     scanf("%f %f",&l,&b);
     ar=l*b;
     pr=2*(l+b);
     printf("Area = %f",ar);
     printf("\nPerimeter = %f",pr);
     if(ar>pr)
        printf("\nArea of Rectangle is greater than its perimeter.");
     else
        printf("\nArea of Rectangle is less than its perimeter.");
}
