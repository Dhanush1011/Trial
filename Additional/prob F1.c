#include <stdio.h>
#include <stdlib.h>

float product(int i1,float f1);
main()
{
     int x;
     float y,mul;
     printf("Enter an integer and real number = ");
     scanf("%d %f",&x,&y);
     mul=product(x,y);
     printf("%f",mul);
}
float product(int i1,float f1)
{
    float res;
    res = i1*f1;
    return(res);
}
