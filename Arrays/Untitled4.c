#include <stdio.h>
int main()
{
    int x,y,z;
    printf("input x,y,z = ");
    scanf("%d %d %d",&x,&y,&z);
    cs(&x,&y,&z);
    printf("%d %d %d",x,y,z);
}

int cs(int *x,int *y,int *z)
{
    int a,b;
    a = *x;
    b = *y;
    *x = *z;
    *y = a;
    *z = b;
}
