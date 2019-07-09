#include <stdio.h>
main()
{
     int s1,s2,s3;
     float avg,per;
     printf("Enter a marks in 3 subjects = ");
     scanf("%d %d %d",&s1,&s2,&s3);
     acad(s1,s2,s3,&avg,&per);
     printf("average of the three subjects = %f",avg);
     printf("\npercentage of marks = %f ",per);
}
acad(int s1,int s2,int s3,float *avg,float *per)
{
    *avg = (s1+s2+s3)/3;
    *per = (s1+s2+s3)/3;

}
