#include <stdio.h>

union input
{
    int x;
    char c;
};
int main()
{
    union input i[2][3];
    int l,m;
    for(l=0;l<2;l++)
    {
        for(m=0;m<3;m++)
        {
            scanf("%d",&i[l][m]);
        }
    }
    for(l=0;l<2;l++)
    {
        for(m=0;m<3;m++)
        {
            printf("%d",i[l][m]);
        }
    }
    return 0;
}
