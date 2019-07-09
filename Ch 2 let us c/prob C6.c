#include <stdio.h>
main()
{
     float a,b,c;
     printf("Enter 3 angles = ");
     scanf("%f %f %f",&a,&b,&c);
     if(a+b+c==180)
        printf("Yes u can make a triangle with these angles !!!");
     else
        printf("Ohhh NO.... U cant Make a triangle with these measurements.");
}
