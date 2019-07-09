#include <stdio.h>
main()
{
    float cp,sp,p,l;
    printf("Please enter the cost price and selling price = ");
    scanf("%f %f",&cp,&sp);
    if(sp>cp)
    {
        printf("U make profit!!!");
        p=sp-cp;
        printf("\nProfit = %f",p);
    }
    else
    {
        printf("U make loss,so sad....");
        l=cp-sp;
        printf("\nLoss = %f",l);
    }
}
