#include <stdio.h>
int gcd(int,int);
int main()
{
     int a,b,x,y;
     printf("Input two number a,b= ");
     scanf("%d %d",&a,&b);
     if(a>b)
     {
         x = a;
         y = b;
     }
     else
     {
         x = b;
         y = a;
     }

     gcd(x,y);

}

int gcd(int x,int y)
{
    int a,b;

    if(y==0)
        printf("%d",x);
    else
    {
        b = y;
        y = x%y;
        x = b;
       gcd(x,y);

    }
}
