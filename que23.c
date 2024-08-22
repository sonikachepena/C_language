#include <stdio.h>
int main()
{
int i,s;
s = 0;
i = 0;
for(i=0; i<100;i++)
{
if((i%6) == 0)
{
s = s + i;
}
}
printf("%d",s);
}
