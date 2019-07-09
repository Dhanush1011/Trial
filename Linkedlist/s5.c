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


    struct node * h2;
    h2 = (struct node*)malloc(sizeof(struct node));
    struct node * n1;
    struct node * n2;
    n1 = head;
    n2 = h2;
    int count = 1;
    while(n1!=NULL)
    {
      if(count<=i-1)
       {

        n2->d = n1->d;
        n1 = n1->nxt;
        n2->nxt = (struct node*)malloc(sizeof(struct node));
        n2 = n2->nxt;}
       else if(count == i)
       {
           n2->d = n1->d;
           n1 = n1->nxt;
           n2->nxt = NULL;
       }
       count++;
    }


    n2 = h2;
    while(n2!=NULL)
    {
        printf("%d ",n2->d);
        n2 = n2->nxt;
    }

    rev(&h2);

    n2 = h2;
    while(n2!=NULL)
    {
        printf("%d ",n2->d);
        n2 = n2->nxt;
    }

    n2 = h2;
    n1 = head;
    while(n1!=NULL)
    {
        if(n1->d != n2->d)
        {
            printf("Not a palindrome");
            return 0;
        }
        n1 = n1->nxt;
        n2 = n2->nxt;
    }

    printf("Yes it is ");
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


rev(struct node **p)
{
    struct node * pre;
    struct node * c;
    struct node * nx;

    pre = *p;
    c = *p;
    nx = (*p)->nxt;

    c->nxt = NULL;
    c = nx;
    nx = nx->nxt;

    while(nx!=NULL)
    {
        c->nxt = pre;
        pre = c;
        c = nx;
        nx = nx->nxt;
    }

    c->nxt = pre;
    pre = c;
    *p = pre;
}
