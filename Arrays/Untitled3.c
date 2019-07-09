#include <stdio.h>

int main()
{
    int a,b,c,f;
    printf("Input = ");
    scanf("%d",&b);
    for(c=0;c<=b;c++)
    {
        f = fibn(c);
        printf("%d  ",f);
    }
}
int fibn(int a)
{
    int f;
    if(a==0||a==1)
    {
        f = 1;
        return f;
    }
    else if (a>1)
   {
     f = fibn(a-1)+fibn(a-2);
     return f;
   }
}
