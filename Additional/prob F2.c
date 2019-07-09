#include <stdio.h>
float F2(int i1,int i2,int i3,int i4,int i5,int *sum,float *avg);
main()
{
    int i1,i2,i3,i4,i5,sum;
    float avg;
    printf("Enter 5 integers = ");
    scanf("%d %d %d %d %d",&i1,&i2,&i3,&i4,&i5);
    F2(i1,i2,i3,i4,i5,&sum,&avg);
    printf("sum = %d",sum);
    printf("\navg = %f",avg);

}
float F2(int i1,int i2,int i3,int i4,int i5,int *sum,float *avg)
{
     *sum=i1+i2+i3+i4+i5;
     *avg=(i1+i2+i3+i4+i5)/5;
     return(*sum);
     return(*avg);
}
