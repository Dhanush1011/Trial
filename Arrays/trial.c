#include <stdio.h>

int main()
{
     int a[5][2],i,j;
     for(i=0;i<5;i++)
     {
         for(j=0;j<2;j++)
             scanf("%d",&a[i][j]);
     }
     for(i=0;i<5;i++)
     {

                printf("id = %d marks = %d\n",a[i][0],a[i][1]);
     }
}
