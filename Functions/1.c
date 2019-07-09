//Write a program in C to find the square of any number using the function


#include <stdio.h>
int square(int);

int main()
{
    int a,ans;
    printf("Input = ");
    scanf("%d",&a);
    ans = square(a);
    printf(" the square of %d is %d",a,ans);
    return 0;
}

int square(int x)
{
    return (x*x);
}
