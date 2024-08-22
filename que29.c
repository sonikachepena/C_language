#include <stdio.h>
int main()
{
int m[] = {15,32,43,55,60,23,17,0};
int s,a,i;
s = 0;
i = 0;
while(m[i] != 0)
{
s = s + m[i];
i = i+1;
}
a = s / i;
printf("%d",a);
}
