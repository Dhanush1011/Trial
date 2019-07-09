#include <stdio.h>
main()
{
    int h,count=1;
    for(;count<=10;count++)
    {
        printf("\nEnter number of extra hrs worked = ");
        scanf("%d",&h);
        printf("Total amt paid to worker = %d",12*h);
    }
}
