/* Sum of first n number using recursion */

#include <stdio.h>
int sum(int a)
{
    int s ;
    if(a>1)
      {
          s = a + sum(a-1);
          return s;
      }

     else
        return 1;
}

int main()
{
    int a, ans;
    printf("Input = ");
    scanf("%d",&a);
    ans = sum(a);
    printf("%d",ans);
    return 0;
}
