#include <stdio.h>
main()
{
    int x;
    printf("Enter a five digit no. = ");
    scanf("%d",&x);
    sumofdigi5(x);
}
sumofdigi5(int x)
{
    int p,q,r,s,t,sum;
    p = x/10000;
    q = x/1000-(p*10);
    r = x/100-(p*100+q*10);
    s = x/10-(p*1000+q*100+r*10);
    t = x-(p*10000+q*1000+r*100+s*10);
    printf("Sum of digits = %d",sum=p+q+r+s+t);
}
