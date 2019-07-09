

#include <stdio.h>
int bin(int);

int main()
{
    int a,l,s;
    printf("Input = ");
    scanf("%d",&a);
    if(a>0)
       {
           printf("0");
           s = bin(a);
           printf("%d",s);
       }
    else
    {
        a = a * -1;
        s = bin(a);
        printf("1\n");
        while(s!=0)
        {
            l = s%10;
            if(l==0)
                printf("%d",l);
            else
                {
                    printf("1");
                    s = s/10;
                    while(s!=0)
                       {
                              l = s%10;
                              if(l==0)
                                   printf("1");
                              else
                                    printf("0");
                               s = s/10;
                        }
                }
            s = s/10;
        }
    }

    return 0;
}

int bin(int a)
{
    int x,sum=0,l;
    l=a;

    while(a!=0)
    {
        x = a%2;
        sum=10*sum + x;
        a = a/2;
    }
    if(l%2==0)
        printf("0");
    return sum;

}
