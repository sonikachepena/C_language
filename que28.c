#include <stdio.h>
int main()
{
int m[] = {15,32,43,55,60};
int s,a,i;
s = 0;
for(i=0; i<5; i++)
{
s = s + m[i];
}
a = s / 5;
printf("%d",a);
}
