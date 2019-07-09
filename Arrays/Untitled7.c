#include <stdio.h>

int main()
{
   int choc,pr,nwr,tchoc,money,wrap;
   printf("Input = ");
   scanf("%d %d %d",&money,&pr,&nwr);
   choc = money/pr;
   wrap = choc;
   tchoc =choc + lol(wrap,nwr);
   printf("%d ",tchoc);

}

int lol(wrap,nwr)
{
    int choc;
    if(wrap>=3)
    {
        choc = wrap/nwr  ;
        wrap = choc + wrap%nwr;
        choc = choc + lol(wrap,nwr);
        return choc;
    }
    else
        return 0;

}
