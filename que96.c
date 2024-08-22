#include <stdio.h>
int sp(char *s,char *d);
int main()
{
char s[10] = "Surabee";
char d[10];
sp(s,d);
printf("%s",d);
}
int sp(char *src,char *dst)
{
while(*src)
{
*dst = *src;
dst = dst+1;
src = src+1;
}
}
