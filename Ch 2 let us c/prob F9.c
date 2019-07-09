#include <stdio.h>
main()
{
     float a,b;
     printf("Enter the marks in each subject A and B = ");
     scanf("%f %f",&a,&b);
     if((a>=55&&b>=45)||(a>=45&&a<55&&b>=55))
        printf("U are Qualified , Congratulations!!!");
     else if(b<45&&a>=65)
        printf("U get an oppurtunity to rewrite B and qualify.All the best.");
     else
        printf("U r disqualified, better luck next time....");
}
