#include <stdio.h>
main()
{
     float a,b,c,d;
     printf("Enter 3 number = ");
     scanf("%f %f %f",&a,&b,&c);
     d=((a>b&&b>c)?a:((b>c&&b>a)?b:c));
     printf("The greatest number is %f",d);
}
