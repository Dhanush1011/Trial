#include <stdio.h>

int main()
{
    int a[10];
    int i,j=0;
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i+=2)
    {
        j = j + a[i];
    }
    printf("even index %d\n",j/5);
    j=0;
     for(i=1;i<=9;i+=2)
    {
        j = j + a[i];
    }
    printf("odd index %d",j/5);
}
