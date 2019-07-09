#include <stdio.h>

int main()
{
    int a[5],b[5],c[5];
    int i;
    printf("Enter values of a\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter values of b\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<=4;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d,",c[i]);
    }
}
