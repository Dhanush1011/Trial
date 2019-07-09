#include <stdio.h>
main()
{
   float km,m,inc,cm,feet;
   printf("Enter the distance in km : ");
   scanf("%f",&km);
   m=km*1000;
   cm=km*100000;
   inc=39370.079*km;
   feet=3280*km;
   printf("In cm = %f",cm);
   printf("\nIn m = %f",m);
   printf("\nIn inches = %f",inc);
   printf("\nIn feet = %f",feet);

}
