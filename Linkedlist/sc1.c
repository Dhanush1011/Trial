#include <stdio.h>
#include <stdlib.h>

struct node
{
   int d;
   struct node * nxt;
};

int main()
{
     struct node * head = NULL;
     int x;
     head = (struct node*)malloc(sizeof(struct node));
    printf("No. of elements ");
    scanf("%d",&x);
     input(&head,x);
     del(&head);
     printf("Linked list deleted");
}
void del(struct node **p)
{
    struct node * n ;
    n = *p;
    struct node * m;
    m = (*p)->nxt;
    while(m!=NULL)
    {
        free(n);
        n = m;
        m = m->nxt;
    }
    *p = NULL;
}
void input(struct node **p,int i)
{
    struct node *n = *p;

    int x;
    int count=1 ;
    while(count<=i)
    {
        if(count<=i-1)
        {
            scanf("%d",&x);
            n->d = x;
            n->nxt = (struct node*)malloc(sizeof(struct node));
            n = n->nxt;
        }
        else if(count == i)
        {
            scanf("%d",&x);
            n->d = x;
            n->nxt = NULL;
        }
        count++;
    }
}
