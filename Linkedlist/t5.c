#include <stdio.h>
#include <stdlib.h>

struct node
{
    int d;
    struct node * nxt;
};
int main()
{
     struct node * h1;
     struct node * h2;

     h1 = (struct node*)malloc(sizeof(struct node));
     h2 = (struct node*)malloc(sizeof(struct node));

     input(&h1);
     input(&h2);

     struct node * n;
     int s1 = 0;
     n = h1;
     while(n!=NULL)
     {
         s1 = s1*10 + (n->d);
         n = n->nxt;
     }
     printf("%d\n",s1);

     int s2 = 0;
     n = h2;
     while(n!=NULL)
     {
         s2 = s2*10 + (n->d);
         n = n->nxt;
     }
     printf("%d",s2);

     int sum,s3;
     sum = s1 + s2;

     s3 = sum;
     int x = 0,count= 1;
     while(s3!=0)
     {
         s3 = s3/10;
         x++;
     }
     printf("\n%d",x);
     printf("\n%d",sum);

     struct node * head ;
     head = (struct node*)malloc(sizeof(struct node));
     n = head;
     while(count<=x)
     {
         if(count<=x-1)
         {
             n->d = sum/pow(10,(x-count));
             sum = sum - ((n->d)*pow(10,x-count));
             n->nxt =  (struct node*)malloc(sizeof(struct node));
             n = n->nxt;

         }
         else if(count==x)
         {
             n->d =1 + sum/pow(10,(x-count));
             n->nxt =NULL;
         }
         count++;
     }

     printf("\n");
     n = head;
     while(n!=NULL)
     {
         printf("%d->",n->d);
         n = n->nxt;
     }
}

void input(struct node **p)
{
    int x,count = 1,i;
    printf("Input length = ");
    scanf("%d",&x);
    struct node *n = *p;

    while(count<=x)
    {
        if(count<=x-1)
        {
            scanf("%d",&i);
            n->d = i;
            n->nxt = (struct node*)malloc(sizeof(struct node));
            n = n->nxt;
        }
        else if(count==x)
        {
            scanf("%d",&i);
            n->d = i;
            n->nxt = NULL;
        }
        count++;
    }
}
