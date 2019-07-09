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
    int x1,x2;
    printf("Linked list 1 = ");
    scanf("%d",&x1);
    input(&h1,x1);
    printf("Linked list 2 = ");
    scanf("%d",&x2);
    input(&h2,x2);

    if(h1->d > h2->d)
    {
        n1 = h2;
        n2 = h1;
    }
    else
    {
        n1 = h1;
        n2 = h2;
    }

    struct node * c1;
    struct node * c2;

    c1 = n1;
    c2 = n2;

    while(c2!=NULL)
    {
        c1 = c1->nxt;
        if(c1->d<c2->d)
        {
            n1 = c1->nxt;
            c1->nxt = c2;
        }
    }

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
