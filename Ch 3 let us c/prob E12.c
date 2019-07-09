#include <stdio.h>
main()
{
     float count,p,q,a,n,r,t,l;
     for(count=1;count<=10;count++)
     {
         printf("\nGive the values of p,r,n,q = ");
         scanf("%f %f %f %f",&p,&r,&n,&q);
         t=(1+r/q);
         for(l=1;l<=(n*q-1);l++)
         {
             t=t*(1+r/q);
         }
         a=p*t;
         printf("%f",a);
     }

}
