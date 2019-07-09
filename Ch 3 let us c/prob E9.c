#include <stdio.h>
main()
{
     int x,count;
     for(count=4;count>=1;count--)
     {
         for(x=1;x<=2*(count-1);x++)
         {
             printf(" ");
         }
         if(count==4)
            printf("1");
         else if(count==3)
            printf("2   3");
         else if(count==2)
            printf("4   5   6");
         else
            printf("7   8    9  10");

         printf("\n");
     }

}
