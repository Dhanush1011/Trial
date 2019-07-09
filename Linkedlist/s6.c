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
    int i;
    head = (struct node*)malloc(sizeof(struct node));
    printf("Length ");
    scanf("%d",&i);
    input(&head,i);

    struct node * n1;
    struct node * n2;
    n1 = head;
    n2 = head;
    int count = 1;

    while( count < (i/2))
    {

        n1 = n1->nxt;
        n2 = n2->nxt->nxt->nxt;
        count++;
    }
    if(i%2==0)
    {
        printf("%d  %d ",n1->d,n2->d);
        struct node * head2;
        head2 = n1->nxt;
        n1->nxt = head;
        n2->nxt = head2;

    }

    n1 = head;
    do
    {
        printf("%d ",n1->d);
        n1 = n1->nxt;
    }while(n1!=head);

    if(i%2!=0)
        printf("%d",n1->nxt->d);
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

