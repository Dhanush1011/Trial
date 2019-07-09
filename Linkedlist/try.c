#include <stdio.h>
#include <stdlib.h>

 struct node
    {
        int d;
        struct node* nxt;
    };

int main()
{


    struct node * head;
    struct node * sec;
    struct node * thr;

    head =(struct node*)malloc(sizeof(struct node));
    sec = (struct node*)malloc(sizeof(struct node));
    thr = (struct node*)malloc(sizeof(struct node));

    head->d = 10;
    head->nxt = sec;

    sec->d = 15;
    sec->nxt = thr;

    thr->d = 20;
    thr->nxt = NULL;
    push(&head,5);
    midd(&sec,&thr,16);

    lt(&head,25);
    struct node *n;
    n = head;
    while(n!=NULL)
    {
        printf("%d  ",n->d);
        n = n->nxt;
    }


    return 0;
}

void lt(struct node **p,int x)
{

    struct node *n = *p;
    while(n->nxt!=NULL)
    {

        n = n->nxt;
    }

    struct node * ins;
    ins = (struct node*)malloc(sizeof(struct node));
    ins->d = x;
    ins->nxt = NULL;


    n->nxt = ins;


}

void midd(struct node **p,struct node **q,int x)
{
    struct node * ins;
    ins = (struct node*)malloc(sizeof(struct node));
    ins->d = x;
    ins->nxt = *q;
    (*p)->nxt = ins;
}
void push(struct node **p,int x)
{
    struct node * ins;
    ins = (struct node*)malloc(sizeof(struct node));
    ins->d = x;
    ins->nxt = *p;
    *p = ins;
}
