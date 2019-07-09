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
    struct node * c;
    struct node * n;
    int count = 0;
    n = head;
    while(count<3)
    {
        scanf("%d",&(n->d));
        count++;
        n = n->nxt;
    }
    n->nxt = NULL;

    while(n!=NULL)
    {
        printf("%d  ",n->d);
        n = n->nxt;
    }
}
