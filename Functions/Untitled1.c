// decimal to binary and then to ones compliment

#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Input = ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("0");
        bin(a,&b);
        printf("%d",b);
    }
    else
    {
        printf("1");
        bin(a,&b);
        rev(b,&d);
        comp1(&d);
    }


}

int bin(int x,int *y)
{
    int a = 0,b,c,d = 0;
    while(x!=0)
    {
        b = x%2;
        a = a*10 + b;
        x = x/2;
    }

    while(a!=0)
    {
        c = a%10;
        d = d*10 + c;
        a = a/10;
    }

    *y = d;
}

int comp1(int *x)
{
    int l;
    while(*x!=0)
    {
        l = *x%10;
        if(l==0)
            printf("1");
        else
            printf("0");
        *x = *x/10;
    }
}

int rev(int a,int *b)
{
    int c,d;
     while(a!=0)
    {
        c = a%10;
        d = d*10 + c;
        a = a/10;
    }

    *b = d;
}
