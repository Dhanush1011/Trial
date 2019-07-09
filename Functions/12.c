// checking prime using recursion

#include <stdio.h>

int cop(int a,int n)
{
    if(n==a)
        {
            printf("yes it is prime");
            return 0;
        }
    if(a%n==0)
        printf("no it is not prime");
    else
        cop(a,n+1);

}
int main()
{
    int a,n=2;
    printf("Input = ");
    scanf("%d",&a);
    cop(a,n);
    return 0;
}
