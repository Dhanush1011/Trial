#include <stdio.h>
main()
{
     int x,pri;
     printf("Enter a number = ");
     scanf("%d",&x);
     pri=primefactors(x);
}
primefactors(int x)
{
    int l,t,a,b;
    for(l=x;l>=1;l/=t)//strtd with l=x and now we divide with prime number using further loop
    {
        for(a=2;a<=l;a++)//first taking a number and checking whether prime or not
        {
            for(b=2;b<=a-1;b++)//jst dividing with each number
            {
                 if(a%b==0)//this gives us a composite so we r breaking it and we dont divide our number with it
                    break;
            }
            if(a==b)//This result gives a prime number
            {
                 if(l%a==0)// as we confirmed prime number we r dividing the given number and if it is a factor we r printing it
                 {
                   printf("\n %d ",a);
                   t=a;//we r storing the prime factor value in t and using it for incrimenting l by actually dividing with a that gives a quotient value and it becomes new l and the process continues till l=1
                   break;
                 }
            }
        }
    }
}
