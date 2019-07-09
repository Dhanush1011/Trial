#include <stdio.h>
main()
{
    float x,y;
    printf("Enter the co-ordinates x and y = ");
    scanf("%f %f",&x,&y);
    if(x==0&&y!=0)
        printf("The point lies on Y-axis");
    else if(y==0&&x!=0)
        printf("The point lies on X-axis");
    else if(x==0&&(y==0))
        printf("The point is origin itslef");
    else
        printf("The point lies in the plane of XY but not on axes");
}
