#include <stdio.h>
main()
{
    signed char pl;
    pl= 130;
    printf("%d\n",pl);
    int ab;
    ab='a';
    printf("%chi",90);
    printf("%c %d\n",ab,ab);
    char s[]="lol",t[10];
    char *ss,*tt;
    ss=s;
    tt=t;
    printf("%s\n",s);
    printf("%s\n",ss);
    printf("\n%d",sizeof(s));
    printf(5 + "jokers lou");
    printf("\n%c","abcdefgh"[4]);
    char c='33';
    printf("\n%d %d %d",sizeof("3"),sizeof(c),sizeof(3));
}
