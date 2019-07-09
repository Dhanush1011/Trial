#include <stdio.h>
main()
{
     int x,p,q,r;

     for(x=1;x<=500;x++)
     {
         p=x/100;
         if(p==0)
         {
             q=x/10;
             if(q!=0)
             {
                 r=(x)%(q*10);
             }
             else
             r=x;
         }
         else
         {
              q=(x/10)%(p*10);
              r=(x)%(p*100+q*10);
         }
         if(x==(p*p*p)+(q*q*q)+(r*r*r))
            printf("\n%d",x);
     }
}
