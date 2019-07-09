#include <stdio.h>
main()
{
    int x,p,q,r,s,count;
    printf("Enter a year = ");
    scanf("%d",&x);
    p=x/1000;
    q=x/100-(p*10);
    r=x/10-(p*100+q*10);
    s=x-(p*1000+q*100+r*10);
    if(p!=0)
    {
        for(count=1;count<=p;count++)
            printf("m");
        if(q>=5)
        {
            printf("d");
            for(count=1;count<=(q-5);count++)
                printf("c");
        }
        if(q<5&&q!=4)
        {
            for(count=1;count<=(q);count++)
                printf("c");

        }
        if(q==4)
            printf("cd");
        if(r>=5)
        {
            printf("l");
            for(count=1;count<=(r-5);count++)
                printf("x");
        }
        if(r<5&&r!=4)
        {
            for(count=1;count<=(r);count++)
                printf("x");
        }
        if(r==4)
            printf("xl");
        if(s==9)
            printf("ix");
        if(s>=5&&s!=9)
        {
            printf("v");
            for(count=1;count<=(s-5);count++)
                printf("i");
        }
        if(s==4)
            printf("iv");
        if(s<5&&s!=4)
        {
            for(count=1;count<=(s);count++)
                printf("i");

        }
    }
}


