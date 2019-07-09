#include<stdio.h>

int main() {

    int size;
    scanf("%d",&size);
    int sub[size+1];
    int i;
    for(i=1;i<=size;i++)
    {
        scanf("%d",&sub[i]);
        printf("\n%d  ",sub[i]);
    }
    printf("%d",sub[0]);
}

