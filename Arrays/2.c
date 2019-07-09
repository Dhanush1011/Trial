#include <stdio.h>

int main()
{
     int a[25],i,e=0,o=0,p=0,n=0,z=0;
     for(i=0;i<25;i++)
     {
         scanf("%d",&a[i]);
     }

     for(i=0;i<25;i++)
     {
         if(a[i]%2==0)
            e = e+1;
         else
            o = o+1;

         if(a[i]>0)
            p = p+1;
         else if(a[i]<0)
            n = n+1;
         else
            z = z+1;
     }
     printf(" p = %d\n",p);
     printf(" n = %d\n",n);
     printf(" o = %d\n",o);
     printf(" e = %d\n",e);
     printf(" 0 = %d\n",z);
}
