#include <stdio.h>
int main()
{
char a[] = "Surabee";
char *p;
p = a;
while(*p != 0)
{
printf("%c",*p);
p = p+1;
}
}
