#include <stdio.h>

int main()
{
   int a,b,c;
   printf("Input = ");
   scanf("%d",&a);
   b = hill(a);
   printf("%d ",b);
   return 0;
}

int hill(a)
{
    int b,c;
    if(a!=0)
    {
        b = a%10;
        if(hill(a/10)<b)
        {
                  return b;
        }
        else
                        return (hill(a/10));

    }


}
