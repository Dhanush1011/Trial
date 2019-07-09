#include <stdio.h>
union input
{
    int i;
    float f;
    char c;
};

int main()
{
    int j,x;
    union input ip;
    printf("Enter data type 1.int 2.float 3.char  = ");
    scanf("%d",&x);
    if(x==1)
    {
        scanf("%d",&(ip.i));
        printf("\n Square of the integer is = %d",(ip.i)*(ip.i));
    }
    if(x==2)
    {
        scanf("%f",&(ip.f));
        j = (int)ip.f;
        printf("\ninteger part of float = %d",j);

        printf("\nfractional part of float = %f",(ip.f)-j);

    }
    if(x==3)
    {
        scanf(" %c",&(ip.c));
        j = (int)ip.c;
        printf("\n upper case = %c",j-32);
    }
}
