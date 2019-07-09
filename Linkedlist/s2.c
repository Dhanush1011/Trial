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
    int x;
    head = (struct node*)malloc(sizeof(struct node));
    printf("Input no. elements = ");
    scanf("%d",&x);
    input(&head,x);
    printf("key = ");
    int key;
    scanf("%d",&key);
    int count = 0;
    struct node * n;
    n = head;
    while(n!=NULL)
    {
        if(n->d == key)
            count++;
        n = n->nxt;
    }

    printf("Number of times %d occurs is %d",key,count);
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
