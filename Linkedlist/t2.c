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
    printf("Enter no. of elements in linked list = ");
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

    struct node * p;
    p = head;

    while(p!=NULL)
    {
        printf("%d  ",p->d);
        p = p->nxt;
    }
    struct node * pr;
    struct node * nx;
    n = head;
    pr = head;
    nx = head->nxt;
    n->nxt = NULL;

    while(nx!=NULL)
    {

        n = nx;
        nx = nx->nxt;
        n->nxt = pr;

        pr = n;

    }
    printf("\n");
    head = pr;
    p = head;
    while(p!=NULL)
    {
        printf("%d  ",p->d);
        p = p->nxt;
    }
}
