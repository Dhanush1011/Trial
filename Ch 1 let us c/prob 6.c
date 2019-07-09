#include <stdio.h>
main()
{
    float x,y,z;
    printf("enter x and y = ");
    scanf("%f %f",&x,&y);
    z=x;
    x=y;
    printf("x = %f",x);
    y=z;
    printf("\ny = %f",y);
}
