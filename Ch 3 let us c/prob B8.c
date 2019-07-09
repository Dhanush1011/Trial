#include <stdio.h>
main()
{
     int x,n,p,count,t;
     printf("Enter a number = ");
     scanf("%d",&x);
     p=2;
     for(n=1; ;n++)
     {
         if(x<(8*n))
         break;
     }
     for(count=1;count<=(n-2);count++)
     {
         p=p*2;
     }
         t=x+p;
         printf("The octa equivalent form of the given number = %d",t);
}
