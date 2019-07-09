#include <stdio.h>
main()
{
     int x,p,n,o,count;
     for(count=1;;count++)
     {
         printf("Please enter a number = ");
         scanf("%d",&x);
         if(x<0)
            n=x;
         else if(x>0)
            p=x;
         else
            o=x;
     }
}
