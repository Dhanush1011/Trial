#include <stdio.h>
#include <stdlib.h>

struct node
{
    int d;
    struct node * nxt;
};
int main()
{
    struct node * head;
    head = (struct node*)malloc(sizeof(struct node));
    int i,x;
    struct node * n;
    n = head;
    int j=1;
    printf("Enter no. of elements in linked list 1 = ");
    scanf("%d",&x);
    while(j<=x)
    {
         if(j<=(x-1))
         {
             scanf("%d",&i);
             n->d = i;
             n->nxt = (struct node*)malloc(sizeof(struct node));
             n = n->nxt;
             j++;
         }
         else if(j==x)
         {
             scanf("%d",&i);
             n->d = i;
             n->nxt = NULL;
             j++;
         }
    }
    struct node * head1;
    head1 = (struct node*)malloc(sizeof(struct node));
    n = head1;
    j=1;
    printf("Enter no. of elements in linked list 2 = ");
    scanf("%d",&x);
    while(j<=x)
    {
         if(j<=(x-1))
         {
             scanf("%d",&i);
             n->d = i;
             n->nxt = (struct node*)malloc(sizeof(struct node));
             n = n->nxt;
             j++;
         }
         else if(j==x)
         {
             scanf("%d",&i);
             n->d = i;
             n->nxt = NULL;
             j++;
         }
    }

    n = head;
    while(n!=NULL)
    {
        printf("%d  ",n->d);
        n = n->nxt;
    }
    printf("\n");
    n = head1;
    while(n!=NULL)
    {
        printf("%d  ",n->d);
        n = n->nxt;
    }

    int c1=0,c2=0;
    n = head;
    while(n!=NULL)
    {
        c1++;
        n = n->nxt;
    }
    n = head1;
    printf("%d ",c1);
    while(n!=NULL)
    {
        c2++;
        n=n->nxt;
    }
    printf("%d \n",c2);
    struct node * n1;
    struct node * n2;
    if(c1>c2)
    {
       n1 = head;
       n2 = head1;
    }
    else if(c2>c1)
    {
        n1 = head1;
        n2 = head;
    }
    n = n1;
        struct node * tp1;
        struct node * tp2;
    while(n2!=NULL)
    {
        tp1 = n1->nxt;
        tp2 = n2->nxt;
        n1->nxt = n2;
        n2->nxt = tp1;
        n1=tp1;
        n2=tp2;

    }



    while(n!=NULL)
    {
        printf("%d ",n->d);
        n=n->nxt;
    }


}
