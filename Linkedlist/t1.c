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


    int m;
    m = count/2;

    int p=1;
    n = head;
    while(p<m+1)
    {
        n = n->nxt;
        p++;
    }
    printf("\nmiddle = %d  ",n->d);

}
