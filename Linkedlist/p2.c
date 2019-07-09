#include <stdio.h>
#include <stdlib.h>

struct node
{
    int d ;
    struct node * nxt;
};
int main()
{
    struct node * head;
    struct node * sec;
    struct node * thr;
    struct node * four;

    head = (struct node *)malloc(sizeof(struct node));
    sec = (struct node *)malloc(sizeof(struct node));
    thr = (struct node *)malloc(sizeof(struct node));
    four = (struct node *)malloc(sizeof(struct node));

    head->d = 10;
    head->nxt = sec;

    sec->d = 15;
    sec->nxt = thr;

    thr->d = 20;
    thr->nxt = four;

    four->d = 25;
    four->nxt = NULL;

    struct node * n;
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
