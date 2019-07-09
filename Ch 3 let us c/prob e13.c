#include <stdio.h>
main()
{
     float t,p,l,q,x;
     printf("Enter the value of x = ");
     scanf("%f",&x);
     for(t=1;t<=7;t++)
     {
         p=((x-1)/x);
         for(l=1;l=(t-1);l++)
         {
            p=p*((x-1)/x);
         }
         q=0.5*p;
         q=q+((x-1)/x);
         printf("The natural logarithm of x = %f",q);
     }

}
