// fibonacci siries using recursion

#include <stdio.h>

int fib(int a)
{
    int f;
    if(a>1)
    {
       f = fib(a-1)+fib(a-2);
       return f;
    }
    else if(a==0||a==1)
        return 1;
}

int main()
{
    int a,f,l;
    printf("Input = ");
    scanf("%d",&a);
    for(l=0;l<a;l++)
     {
          f = fib(l);
          printf("%d  ",f);
     }
     return 0;
}
