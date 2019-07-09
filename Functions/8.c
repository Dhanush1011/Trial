// sum of digits using recursion

#include <stdio.h>

int sod(int a)
{
    int sum , l;
    if(a>9)
    {
        l = a%10;
        sum = l + sod(a/10);
        return sum;
    }
    else
        return a;
}

int main()
{
    int a,ans;
    printf("Input = ");
    scanf("%d",&a);
    ans = sod(a);
    printf("%d",ans);
    return 0;
}

