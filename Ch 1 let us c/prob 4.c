#include <stdio.h>
main()
{
    float f,c;
    printf("Enter the temp in Farenheit = ");
    scanf("%f",&f);
    c=(f-32)/1.8;
    printf("Temperature in Celsius = %f",c);
}
