#include <stdio.h>

int main()
{
    int x,y,a=50;
    for(x=2;x<a;x++)
    {
        for(y=2;y<x;y++)
        {
            if(x%y==0)
                    break;

        }
        if(y==x)
            printf("%d ",x);
    }
}
