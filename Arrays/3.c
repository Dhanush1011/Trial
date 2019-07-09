#include <stdio.h>
int sw(int *x,int *y);
int main()
{
     int a[2],i;


     for(i=0;i<2;i++)
     {
         scanf("%d",&a[i]);
     }
     printf("%d\n",a[0]);
     printf("%d\n",a[1]);

     for(i=0;i<2;i++)
     {

        if(a[i]<a[0])
           {
             sw(&a[i],&a[0]);
           }
        else if(a[i]<a[1])
           {
             sw(&a[i],&a[1]);
           }


     }
     printf("%d\n",a[0]);
     printf("%d\n",a[1]);


}

int sw(int *x,int *y)
{
    int t;
    *x = t;
    *x = *y;
    *y = t;
}
