#include <stdio.h>
int main()
{
    int a[10];
    int i,max,min;
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(i=0;i<=9;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    printf("\n%d\n",max);

    min = a[0];
    for(i=0;i<=9;i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    printf("%d",min);
}
