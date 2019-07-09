#include <stdio.h>
main()
{
    first25(0);
}
first25(int x)
{
    int a;
    for(a=1;a<=25;a++)
    {
        x=(a-1)+x;
        printf("%d  ",x);
    }
}
