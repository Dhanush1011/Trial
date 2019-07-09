#include <stdio.h>
main()
{
      float x,t,f,p=1;
      for(x=1;x<=7;x++)
      {
          f=1;
          for(t=1;t<=x;t++)
          {
              f=f*t;
          }
          p=p+(x/f);
      }
      printf("%f",p-1);



}
