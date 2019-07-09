#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node * pre;
    int d;
    struct node * nxt;
};

int main()
{
    struct node * head;
    head = (struct node*)malloc(sizeof(struct node));
    input(&head);
    struct node * n;
    struct node * m;

    head->pre = NULL;
    n = head;
    m = head->nxt;
    while(m!=NULL)
    {
        m->pre = n;
        n = n->nxt;
        m = m->nxt;
    }

    n = head;
    while(n!=NULL)
    {
        printf("%d %u %u ",n->d,n->pre,n->nxt);
        n = n->nxt;
    }
}

void input(struct node **p)
{
    struct node *n = *p;
    printf("ENter number of elements of linked list ");
    int i,x;
    scanf("%d",&i);
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
