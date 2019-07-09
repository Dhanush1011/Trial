// recursion to print first 50 natural numbers

#include <stdio.h>
 int f50(int a)
 {

      if(a<=50)
      {
          printf("%d  ",a);
          f50(a+1);
      }
 }

 int main()
 {
     f50(1);
     return 0;
 }
