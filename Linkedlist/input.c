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
     input(&h1);
     input(&h2);

     struct node * n;
     n = h1;
     while(n!=NULL)
     {
         printf("%d ",n->d);
         n = n->nxt;
     }

     n = h2;     ;
     while(n!=NULL)
     {
         printf("%d ",n->d);
         n = n->nxt;
     }
}

void input(struct node **p)
{
    int x,count = 1,i;
    printf("Input length = ");
    scanf("%d",&x);
    struct node *n = *p;

    while(count<=x)
    {
        if(count<=x-1)
        {
            scanf("%d",&i);
            n->d = i;
            n->nxt = (struct node*)malloc(sizeof(struct node));
            n = n->nxt;
        }
        else if(count==x)
        {
            scanf("%d",&i);
            n->d = i;
            n->nxt = NULL;
        }
        count++;
    }
}
