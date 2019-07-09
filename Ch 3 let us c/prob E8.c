#include <stdio.h>
main()
{
    int x,t,l;
    printf("Enter a number = ");
    scanf("%d",&x);
    for(t=1;t<=20;t++)
    {
        l=x*t;
        printf("\n%d * %d = %d",x,t,l);
    }
}
