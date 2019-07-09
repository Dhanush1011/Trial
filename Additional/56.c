#include <stdio.h>
int *m();
main()
{
    int *k = m();
    printf("Hello");
    printf("\n%u",k);


}

int *m()
{
    int a[2]={3,4};
    printf("%u\n",&a[0]);
    return a;
}
