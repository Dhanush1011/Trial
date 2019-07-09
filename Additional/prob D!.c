#include <stdio.h>
main()
{
     int x,fact;
     printf("Enter a number = ");
     scanf("%d",&x);
     fact=factorial(x);
     printf("The factorial of the givan number is = %d",fact);
}
factorial(int a)
{
    int b;
    if(a==1)
        return(1);
    else
        b=a*factorial(a-1);
    return(b);

}
