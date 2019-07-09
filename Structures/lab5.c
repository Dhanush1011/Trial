#include <stdio.h>
struct Date
{
    int date;
    int month;
    int year;
};

int main()
{
    struct Date x;
    int n;
    printf("Enter the date in order Date,month,Year = ");
    scanf("%d %d %d",&x.date,&x.month,&x.year);
    printf("\nEnter no. days to reduce = ");
    scanf("%d",&n);
    if(x.date>31)
    {
      printf("Invalid");
      return 0;
    }
    if(x.date-n>0)
    {
        printf("%d-%d-%d",x.date-n,x.month,x.year);
    }
    if(x.date-n==0)
    {
        printf("31-%d-%d",x.month-1,x.year);
    }
    if(x.date-n<0)
    {
        int j;
        j = x.date - n;
        printf("%d-%d-%d",31+j,x.month-1,x.year);
    }

}
