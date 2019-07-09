#include <stdio.h>

int main()
{
    int i = 3,*x;
    float j = 4.0,*y;
    char k = 'a',*z;

    x = &i;
    y = &j;
    z = &j;

    printf("%d\n",*x);
    printf("%f\n",*y);
    printf("%c\n",*z);
    printf("%u\n",x);
    printf("%u\n",y);
    printf("%u\n",z);
    x++;
    y++;
    z++;
    printf("%u\n",x);
    printf("%u\n",y);
    printf("%u\n",z);
    printf("%f\n",*z);
}
