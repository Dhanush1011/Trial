#include <stdio.h>
main()
{
     int a,b,pow;
     printf("Enter base number and its power = ");
     scanf("%d %d",&a,&b);
     pow=power(a,b);
     printf("%d to the power of %d = %d",a,b,pow);
}
power(int x,int y)
{
    int count,res=1;
    for(count=1;count<=y;count++)
            res=res*x;
    return(res);

}
