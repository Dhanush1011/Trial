#include <stdio.h>
main()
{
     int y,x;
     for(x=2;x<=300;x++)
     {
         for(y=2;y<=(x-1);y++)
         {
             if((x%y)==0)
             break;
             else
             printf("\n%d",x);
         }

     }
}
