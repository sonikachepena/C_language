#include <stdio.h>
int main()
{
int m[5],s,a,i;
m[0] = 15;
m[1] = 40;
m[2] = 32;
m[3] = 11;
m[4] = 22;
s = 0;
for(i=0; i<5; i++)
{
s = s + m[i];
}
a = s / 5;
printf("%d",a);
}
