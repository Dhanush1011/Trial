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

    n = head;
    while(n!=NULL)
    {
        printf("%d  ",n->d);
        n = n->nxt;
    }
    n = head;
    int count = 0;
    while(n!=NULL)
    {
        count++;
        n = n->nxt;
    }

    printf("\n%d",count);
    int m;
    m = count/2;
    printf(" m  %d",m);
    int p=1;
    n = head;
    while(p<m+1)
    {
        n = n->nxt;
        p++;
    }
    printf("\nmiddle = %d  ",n->d);


    return 0;
}
