#include <stdio.h>
main()
{
    int num,p,q,r,s,t,z;
    printf("Enter a five digit number = ");
    scanf("%d",&num);
    p=num/10000;
    q=((num/1000))%(10*p);
    r=((num/100))%((100*p+10*q));
    s=((num/10))%((1000*p+100*q+10*r));
    t=(num)%((10000*p+1000*q+100*r+10*s));
    printf("The reverse of the number = %d%d%d%d%d",t,s,r,q,p);
    if ((p==t)&&(q==s))
        printf("\nThe original and reversed numbers are equal.");
    else
        printf("\nThe original and reversed numbers are not equal.");

}
