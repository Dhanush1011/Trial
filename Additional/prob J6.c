#include <stdio.h>
main()
{
    int x,sins;
    scanf("%d",&x);
    sins=odd(x);
    printf("%d ",sins);

}
odd(int p)
{
    int x=0,n,a,y;
    for(n=1;n<=5;n++)
    {
        y=1;
        for(a=1;a<=2*n-1;a++)
        {
            y=y*p;
        }
        printf("%d  ",y);
        x=x+y;
    }
    printf("\n%d ",x);
    return(x);
}
