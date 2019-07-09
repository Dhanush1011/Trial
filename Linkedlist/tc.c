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
    printf("ENter number of elements of linked list ");
    scanf("%d",&i);
    input(&head,i);

    head->nxt->nxt->nxt->nxt = head->nxt;
    struct node * n;

    n = head;

    int x = 1;
    while(x<=i)
    {
        if(n->nxt == NULL)
        {
            printf("It is a single connected list without loop ");
            return 0;
        }
        n = n->nxt;
        x++;
    }

    if(n!=NULL)
        printf("Its a single connected list with a loop.");

    struct node * m;
    m = n;
    int count = 0;
    n = head;
    while(n!=m)
    {
        count++;
        n = n->nxt;
    }
    printf("\n%d\n",count);
    printf("Members of loop are   ");

    x = 0;
    while(x<i - count)
    {

        printf("%d ",m->d);
        m = m->nxt;
        x++;
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
