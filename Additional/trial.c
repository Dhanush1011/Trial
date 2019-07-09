#include <stdio.h>
main()
{
    int a,b,x;
    printf("Enter a number = ");
    scanf("%d",&x);
    primefactors(x);
}
primefactors(int l)
{
    int a,b;
    for(a=2;a<=l;a++)
    {
        for(b=2;b<=a-1;b++)
        {
            if(a%b==0)
                break;
        }
        if(a==b)
        {
            if(l%a==0)
            {
                printf("%d ",a);
                l=l/a;
            }

        }

    }

}
