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
    head = (struct node*)malloc(sizeof(struct node));
    int i,x;
    struct node * n;
    n = head;
    int j=1;
    printf("Enter no. of elements in linked list = ");
    scanf("%d",&x);
    while(j<=x)
    {
         if(j<=(x-1))
         {
             scanf("%d",&i);
             n->d = i;
             n->nxt = (struct node*)malloc(sizeof(struct node));
             n = n->nxt;
             j++;
         }
         else if(j==x)
         {
             scanf("%d",&i);
             n->d = i;
             n->nxt = NULL;
             j++;
         }
    }

    n = head;
    while(n!=NULL)
    {
        printf("%d",n->d);
        n = n->nxt;
    }

    struct node * c;
    struct node * n1;
    struct node * n2;
    struct node * b;

    n = head;
    while(n!=NULL)
    {
        if((n->d)%2==0)
        {
            n1 = n;
            break;
        }
        n = n->nxt;
    }
    printf("\n%d ",n1->d);

    n = head;
    while(n!=NULL)
    {
        if((n->d)%2!=0)
        {
            n2 = n;
            break;
        }
        n = n->nxt;
    }
    printf("\n%d\n",n2->d);

    n = head;
    c = n1;
    b = n2;
    int c1 = 0,c2 = 0;
    while(n!=NULL)
    {
        if((n->d)%2==0)
        {
            if(c1>=1)
            {c->nxt = n;
            c = c->nxt;}
            c1++;
        }

        if((n->d)%2!=0)
        {
            if(c2>=1)
            {
                 b->nxt = n;
                 b = b->nxt;
            }
            c2++;
        }


        n = n->nxt;
    }

    c->nxt = n2;
    b->nxt = NULL;
    head = n1;


    n = head;
    while(n!=NULL)
    {
        printf("  %d  ",n->d);
        n = n->nxt;
    }

    printf("\n");
}
