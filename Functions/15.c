// hailstone sequence recursion

#include <stdio.h>
int hail(int a)
{
    int e,o;
    if(a==1)
        return 0;
    if(a%2==0)
       {
            printf("%d ",a/2);
            hail(a/2);
       }
    else
        {
            printf("%d ",3*a+1);
            hail((3*a)+1);
        }
}

int main()
{
    int a;
    printf("Input = ");
    scanf("%d",&a);
    printf("%d ",a);
    hail(a);
    return 0;
}
