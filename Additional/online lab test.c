#include <stdio.h>

int main()
{
     int l,n=1,s,c;
     printf("Input length = ");
     scanf("%d",&l);
     s = seq(n,l);
     s = rev(s);
     n=1;
     c = check(n,s,l);

     if(c==1)
     {
         printf("Sequence accepted");
         return 0;
     }
     else
        printf("Sequence not accepted");
     return 0;
}

int seq(int n,int l)
{
    int s=0;
    char ch;
    if(n<=l)
    {
        printf("Enter alphabet = ");
        scanf(" %c",&ch);
        if(ch=='a')
        {
            s = 1 + seq(++n,l)*10;

            return s;
        }
        if(ch=='b')
        {
            s = 2 + seq(++n,l)*10;;
            return s;
        }
    }
    else
        return 0;
}

int rev(int a)
{
    int r=0,p;
    while(a!=0)
    {
        p=a%10;
        r = r*10+p;
        a=a/10;
    }
    return r;
}

int check(int n,int s,int l)
{
    int a,b;

    if(n<=l-3)
    {
        a = s%10000;
        if(a==1221)
        {
            return 1;
        }
        else
        {
            check(++n,s/10,l);

        }

    }
}
