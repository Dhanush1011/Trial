#include <stdio.h>
main()
{
   float bs,da,ra,gs;
   scanf("%f",&bs);
   da=40*bs/100;
   ra=20*bs/100;
   gs=bs+da+ra;
   printf("Dearness Allowance = %f",da);
   printf("\nRent Allowance = %f",ra);
   printf("\nGross Salary = %f",gs);

}
