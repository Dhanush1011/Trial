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

    //del(&head);
    de(&head,&sec);

    struct node *n;
    n = head;
    while(n!=NULL)
    {
        printf("%d  ",n->d);
        n = n->nxt;
    }

    return 0;
}

void del(struct node **p)
{
    struct node *temp = (*p);
    (*p) = (*p)->nxt;
    free(temp);
}

void de(struct node **q,struct node **p)
{
    struct node *temp = (*p);
    (*q)->nxt = (*p)->nxt;
    free(temp);

}
