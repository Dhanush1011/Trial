#include <stdio.h>
main()
{
     float x,y,i;
     for(y=1;y<=6;y++)
     {
         for(x=5.5;x<=12.5;x+=0.5)
         {
             i=2+(y+(0.5*x));
             printf("\nx = %f y = %f i = %f",x,y,i);

         }
     }
}
