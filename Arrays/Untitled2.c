#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf(" Input = ");
    scanf("%d",&a);
    prfact(a);
}

int prfact(int a)
{
    int x,y;

    for(x=2;x<=a;x++)
    {
        for(y=2;y<x;y++)
        {
            if(x%y==0)
                    break;

        }
        if(y==x)
           {
               if(a%x==0)
               {
                 printf("%d ",x);
                 prfact(a/x);
                 break;
               }
           }
    }
}
