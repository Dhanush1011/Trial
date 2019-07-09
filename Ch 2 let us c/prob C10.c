#include <stdio.h>
main()
{
     float x1,y1,x2,y2,x3,y3,p,q;
     printf("Enter the co-ordinates in the order x1 y1 x2 y2 x3 y3 = ");
     scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
     p=(y2-y1)/(x2-x1);
     q=(y3-y2)/(x3-x2);
     if((p==q)||(p==(-1*q)))
         printf("All the three points lie on the same line");
     else
        printf("The 3 points dont lie on the same line.");

}
