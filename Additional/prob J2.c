#include <stdio.h>
main()
{
    int x;
    printf("Enter a number = ");
    scanf("%d",&x);
    primefactors(x);
}
primefactors(int l)
{
      int t,a,b;
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
                   primefactors(l/a);//we find prime factor of l/aand further and further until it reaches 1 automatically we dont have prime factors so programme terminates
                   break;
                 }
            }
        }

}

