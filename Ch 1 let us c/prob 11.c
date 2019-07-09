#include <stdio.h>
main()
{
    float sp,cp,tp,tpep,spep;
    printf("Enter the total selling price and total profit gain = ");
    scanf("%f %f",&sp,&tp);
    spep=sp/15;
    tpep=tp/15;
    cp=spep-tpep;
    printf("Cost of each product = %f",cp);

}
