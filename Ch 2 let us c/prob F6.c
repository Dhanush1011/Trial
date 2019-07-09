#include <stdio.h>
main()
{
     float a,b,c;
     printf("Enter the sides of the triangle = ");
     scanf("%f %f %f",&a,&b,&c);
     if((a+b>c)&&(b+c>a)&&(c+a>b))
        printf("YES U can make a triangle with these sides");
     else
        printf("U cannot make a triangle with these sides....");
}
