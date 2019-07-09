#include <stdio.h>
int main()
{
    int a[]={5,8,6,2,3};
    int *p = a,i,max,j,l;
    for(j=1;j<=2;j++)
   {
      max = *p;
    for(i=0;i<5;i++)
    {
         if(a[i]>max)
           {
                max = a[i];
                l = i;
           }
    }
    a[l]=0;

   }
    max = *p;
    for(i=0;i<5;i++)
    {
         if(a[i]>max)
            max = a[i];
    }
    printf("%d ",max);
}
