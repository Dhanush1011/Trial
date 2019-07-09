#include <stdio.h>

int main()
{
     int a[25],i,s=0,x;
     for(i=0;i<25;i++)
     {
         scanf("%d",&a[i]);
     }

     printf(" enter a number to be checked = ");
     scanf("%d",&x);
     for(i=0;i<25;i++)
     {
         if(x==a[i])
            s = s + 1;
     }
     printf(" \n%d times %d has occured ",s,x);
}
