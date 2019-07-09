#include <stdio.h>
main()
{
    float x,y,p,a,b,r;
    printf("Please enter the co-ordinates of the points x,y and also center a,b and radius r = ");
    scanf("%f %f %f %f %f",&x,&y,&a,&b,&r);
    p=sqrt(((x-a)*(x-a))+((y-b)*(y-b)));
    if(p==r)
        printf("The given point lies on the circle with given centre and radius.");
    else if(p<r)
        printf("The given point lies inside the circle with given centre and radius.");
    else if(p>r)
        printf("The given point lies outside the circle with given centre and radius.");
}
