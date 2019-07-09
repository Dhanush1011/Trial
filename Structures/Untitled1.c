#include <stdio.h>

struct student{

     int roll;
     char name[20];
     char dep[6];
     char course[15];
     int yoj;
};

int main()
{
    struct student s[5];
    int i,j;
    for(i=0;i<5;i++)
    {
        printf("\nroll no. = ");
        scanf("%d",&s[i].roll);
        printf("\n name  = ");
        scanf("%s",s[i].name);
        printf("\n departement  = ");
        scanf("%s",s[i].dep);
        printf("\ncourse = ");
        scanf("%s",s[i].course);
        printf("\nyear of joining = ");
        scanf("%d",&s[i].yoj);
    }

    details(s);
    return 0;
}

details(struct student *str)
{
    int i,x;
    printf("ROll number = ");
    scanf("%d",&x);
    for(i=0;i<5;i++)
    {
        if(x==str->roll)
        {
            printf(" roll no. = %d\n ",str->roll);
            printf(" name  = %s\n",str->name);
            printf(" departement  = %s\n",str->dep);
            printf(" course = %s\n",str->course);
            printf(" year of joining = %d",str->yoj);

        }
        str++;
    }
}
