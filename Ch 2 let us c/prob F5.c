#include <stdio.h>
main()
{
     float n;
     printf("Enter the number of days the member is late = ");
     scanf("%f",&n);
     if(n<=5)
        printf("U R Safe.The fine is just 50 paise");
     else if(n>5&&n<=10)
        printf("U should pay 1 Rupee");
     else if(n>10&&n<=30)
        printf("U should Pay 5 Rupees");
     else
        printf("ur membership is cancelled");
}
