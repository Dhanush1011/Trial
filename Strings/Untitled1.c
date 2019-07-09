#include <stdio.h>
#include <string.h>
main( )
 {
         char  name[25]="dhanush",lol[25]="DHANUSH" ;
         int i;

         printf("lol %s\n",lol);
         printf("name %s\n",name);
         i = strcmp(lol,name);
         if(i<0)
           {
             printf("lol sad");
           }
         else if(i>0)
           {
                printf("name sad");
           }
         else
           {
                printf("both happy");
           }
 }
