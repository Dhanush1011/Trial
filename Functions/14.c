// power of a,b by recursion

#include <stdio.h>

int pow(int a,int b)
{
    int l;
    if(b>=1)
    {
        l= a * pow(a,b-1);
         return l;
    }

    if(b==0)
        return 1;

}

int main()
{
    int a,b,ans;
    printf("base and power = ");
    scanf("%d %d",&a,&b);
    ans = pow(a,b);
    printf("%d power %d is = %d",a,b,ans);
    return 0;
}
