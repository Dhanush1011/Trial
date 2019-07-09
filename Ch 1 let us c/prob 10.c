#include <stdio.h>
main()
{
    float p,m,w,lm,lw,im,iw,ti,tl;
    p=80000;
    m=0.52*p;
    w=0.48*p;
    lm=0.35*p;
    tl=0.48*p;
    lw=tl-lm;
    im=m-lm;
    iw=w-lw;
    ti=im+iw;
    printf("%f",ti);


}
