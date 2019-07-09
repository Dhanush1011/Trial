#include <stdio.h>
main()
{
     float R,S,A;
     printf("Enter the Ages of Ram Shyam and Ajay = ");
     scanf("%f %f %f",&R,&S,&A);
     if(R<S&&R<A)
        printf("Ram is the youngest of the three.");
     else if(S<R&&S<A)
        printf("Shyam is the youngest of the three.");
     else if(A<S&&A<R)
        printf("Ajay is the youngest of the three.");

}
