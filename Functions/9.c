// factorial using recursion

#include<stdio.h>

int fact(int a)
{
    int f;
    if (a>0)
    {
        f = a*fact(a-1);
        return f;
    }
    else
        return 1;
}

int main()
{
    int a,ans;
    printf("Input = ");
    scanf("%d",&a);
    ans = fact(a);
    printf("%d",ans);
    return 0;

}
