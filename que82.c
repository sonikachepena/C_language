#include <stdio.h>
int add(int x, int y);
int main()
{
int a,b,c;
a = 10;
b = 20;
c = 25;
c = add(a,b);
printf("%d",c);
}
int add(int x, int y)
{
int z;
z = x + y;
return z;
}
