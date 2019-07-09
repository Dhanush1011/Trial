#include <stdio.h>
main()
{
     float Hness,C,Ts;
     printf("Enter the Hardness Carbon content and tensile strength of the Steel = ");
     scanf("%f %f %f",&Hness,&C,&Ts);
     if(Hness>50&&C<0.7&&Ts>5600)
        printf("Grade = 10");
     else if(Hness>50&&C<0.7)
        printf("Grade = 9");
     else if(C<0.7&&Ts>5600)
        printf("Grade = 8");
     else if(Hness>50&&Ts>5600)
        printf("Grade = 7");
     else if(Hness>50||C<0.7||Ts>5600)
        printf("Grade = 6");
     else
        printf("Grade = 5");
}
