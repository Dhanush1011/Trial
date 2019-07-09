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
     head = (struct node*)malloc(sizeof(struct node));
     input(&head);

     struct node * n ;
     n = head;
     do
     {
         printf("%d ",n->d);
         n = n->nxt;
     }while(n!=head);
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
            n->nxt = *p;
        }
        count++;
    }
}


