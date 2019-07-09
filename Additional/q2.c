#include <stdio.h>

int main()
{
     int no,change;
     printf("Input = ");
     scanf("%d",&no);
     change = check(no);
     if(change==0||change==1)
     {
         printf("Yes Hill");
     }
     else
        printf("Not a hill number");
}

int check(int n)
{
    int change = 0,a,b,c;
    if(n>=10)
    {
        a = n%10;
        b = n%100 - (a*10);
        if(a-b<0)
        {
            if(a-b>0)
            {change = change + 1;}
            check(n/10);
        }
        if(a-b>0)
        {
            if(a-b<0)
            {
                change = change + 1;
            }
            check(n/10);
        }
    }

    return change;
}
