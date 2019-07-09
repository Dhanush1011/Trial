//Write a program in C to check a given number is even or odd using the function.


#include <stdio.h>
int eo(int);

int main()
{
     int a;
    printf("Input = ");
    scanf("%d",&a);
    eo(a);
    return 0;
}

int eo(int x)
{
    if(x%2==0)
        printf("It is even.");
    else
        printf("It is odd");
    return 0;
}
