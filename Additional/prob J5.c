#include <stdio.h>
main()
{
    int sum;
    sum=addn(25);
    printf("%d ",sum);
}
addn(int x)
{
    int y;
    if(x==1)
        return(1);
    else
        y=x+addn(x-1);
    return(y);
}
