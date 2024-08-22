#include <stdio.h>
int ps(char *s);
int main()
{
char s[] = "Surabee";
ps(s);
}
int ps(char *p)
{
while(*p)
{
printf("%c",*p++);
}
}
