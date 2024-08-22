#include <stdio.h>
int sc(char *s,char *d);
int main()
{
char s[20] = "Surabee ";
char d[10] = "School";
sc(s,d);
printf("%s",s);
}
int sc(char *src,char *dst)
{
while(*src)
{
*src++;
}
while(*dst)
{
*src++ = *dst++;
}
*dst = 0;
}
