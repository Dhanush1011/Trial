// decimal to binary using recursion

#include <stdio.h>

int dtob(int a)
{
    int l,k;
    if(a!=1)
    {
        l = a%2;
        dtob(a/2);
        printf("%d",l);
    }
    else
        printf("1");
}

int main()
{
    int a;
    printf("Input = ");
    scanf("%d",&a);
    dtob(a);
    return 0;
}
