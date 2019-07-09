#include <stdio.h>
main()
{
     float a,b,c;
     printf("Enter the sides of the triangle = ");
     scanf("%f %f %f",&a,&b,&c);
     if((a+b>c)&&(b+c>a)&&(c+a>b))
       {
          printf("YES U can make a triangle with these sides"); //this tests the possibility of triangle
          if(a==b&&b==c)
              printf("\nThe triangle is Equiateral triangle.");//this gives result o eqi

           if ((a==b&&b!=c)||(b==c&&c!=a)||(c==a&&a!=b))//first i tested isoscles
           {
              if ((a*a+b*b==c*c)||(b*b+c*c==a*a)||(a*a+c*c==b*b))//and then rigght angled or not
                printf("\nThe triangle is Isosceles Right angled triangle.");
              else
                printf("\nThe triangle is Isosceles triangle");//i used nested if else
            }
            else if ((a*a+b*b==c*c)||(b*b+c*c==a*a)||(a*a+c*c==b*b))//normal right angled
                printf("\nThe triangle is right angled triangle.");
            else
                printf("\nThe triangle is scalen triangle.");
        }
     else
        printf("U cannot make a triangle with these sides....");


}
