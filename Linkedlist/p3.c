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
    struct node * four;
    struct node * five;

    struct node * head1;
    struct node * sec1;
    struct node * thr1;
    struct node * four1;



    head = (struct node *)malloc(sizeof(struct node));
    sec = (struct node *)malloc(sizeof(struct node));
    thr = (struct node *)malloc(sizeof(struct node));
    four = (struct node *)malloc(sizeof(struct node));
    five = (struct node *)malloc(sizeof(struct node));

    head1 = (struct node *)malloc(sizeof(struct node));
    sec1 = (struct node *)malloc(sizeof(struct node));
    thr1 = (struct node *)malloc(sizeof(struct node));
    four1 = (struct node *)malloc(sizeof(struct node));


    head->d = 5;
    head->nxt = sec;

    sec->d = 15;
    sec->nxt = thr;

    thr->d = 25;
    thr->nxt = four;

    four->d = 35;
    four->nxt = five;

    five->d = 45;
    five->nxt = NULL;

    head1->d = 10;
    head1->nxt = sec1;

    sec1->d = 20;
    sec1->nxt = thr1;

    thr1->d = 30;
    thr1->nxt = four1;

    four1->d = 40;
    four1->nxt = NULL;

    struct node * n;

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
