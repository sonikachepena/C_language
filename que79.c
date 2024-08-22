#include <stdio.h>
int main()
{
char a[] = "Surabee";
char *p;
p = a;
do
{
printf("%c",*p);
} while(*p++);
}
