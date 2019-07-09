#include <stdio.h>
main()
{
      char x;
      int count,t;
      for(count=7;count>=1;count--)
      {
         for(x=65;x<(count+65);x++)
         {
              printf("%c",x);
              printf(" ");
         }
         for(t=0;t<=(2*(7-count))-2;t++)
             {
                 printf("  ");
             }
         if(count<=6)
         {   for(x=(count+64);x>=65;x--)
             {
                 printf("%c",x);
                 printf(" ");
             }
         }
         else
         {
             for(x=70;x>=65;x--)
             {
                printf("%c",x);
                printf(" ");
             }
         }
             printf("\n");
      }
}
