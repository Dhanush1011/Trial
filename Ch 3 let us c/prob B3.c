#include <stdio.h> <math.h>
main()
{
     int x,y,count,p;
     printf("Enter 2 numbers x and y = ");
     scanf("%d %d",&x,&y);
     p=x*x;
     for(count=1;count<=(y-2);count++)
     {
         p=p*x;
     }
     printf("The value of x raised to the power of y = %d",p);

}
