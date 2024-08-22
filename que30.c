#include <stdio.h>
int main()
{
int m[] = {13,32,40,55,60,21,17,0};
int s,a,i;
s = 0;
i = 0;
while(m[i] != 0)
{
s = s + m[i];
i = i+1;
}
a = s / i;
printf("%d %d %d",i,s,a);
}