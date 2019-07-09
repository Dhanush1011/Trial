//Write a program in C to count the digits of a given number using recursion.

#include <stdio.h>
int nod(double a)
{
    double c ;
    if(a>9)
    {
        c = nod(a/10) + 1;
        return c;

    }
    else
        return 1;
}

int main()
{
    double a,ans;
    printf("Input = ");
    scanf("%lf",&a);
    ans = nod(a);
    printf("%lf",ans);
    return 0;
}
