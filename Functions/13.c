// even and odd between 1 to n

#include <stdio.h>

int even(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n%2==0)
        printf("%d ",n);
    even(n-1);
}


int odd(int n)
{
    if(n==0)
        return 0;
    if(n%2!=0)
        printf("%d ",n);
    odd(n-1);
}

int main()
{
    int a ;
    printf("Input = ");
    scanf("%d",&a);
    printf("Even = ");
    even(a);
    printf("Odd = ");
    odd(a);
    return 0;
}
