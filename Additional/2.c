#include <stdio.h>

void main()
{
    int b[]={1,2,3},i;
    for(i=0;i<3;i++)
        printf("%d\n",*(b+i));
    printf("%d",b[1]++);
    printf("\n\n");
    int a[5];
    for (i=0;i<=4;i++)
        printf("%d\n",&a[i]);


}
