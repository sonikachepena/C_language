#include <stdio.h>
int main()
{
int i,s;
s = 0;
i = 0;
for(i=0; i<10;i++)
{
if((i%2) == 1)
{
s = s + i;
}
}
printf("%d",s);
}
