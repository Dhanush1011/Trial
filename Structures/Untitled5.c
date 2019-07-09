#include <stdio.h>
int main()
{
char *str;
str = "GfG";	 /* Stored in read only part of data segment */
 /* Problem: trying to modify read only memory */
printf("%s",*str+1);
return 0;
}

