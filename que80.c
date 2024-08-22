#include <stdio.h>
int main()
{
char a[] = "Surabee";
char *p;
a[4] = 0;
p = a;
do
{
printf("%c",*p);
} while(*p++);
}