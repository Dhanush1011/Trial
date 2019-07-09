#include <stdio.h>
main()
{
    int y,p,t;
    printf("Enter a number = ");
    scanf("%d",&y);
    p=y*t;
    for(t=(y-1);t>1;t--)
        {
             p=p*(t-1);
        }
    printf("\n%d",p);

}


