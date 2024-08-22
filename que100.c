#include <stdio.h>
int sr(char *s,char *d);
int main()
{
char s[10] = "Surabee";
char d[10];
sr(s,d);
printf("%s",d);
}
int sr(char *src,char *dst)
{
int i=0;
while(*(src+i) != 0) i++;
while(i)
{
*dst++ = *(src + i - 1);
i--;
}
*dst = 0;
}