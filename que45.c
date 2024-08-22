#include <stdio.h>
int main()
{
char c[8];
int i;
scanf("%s",c); /* Entered Value = Surabee */
i = 0;
while(c[i] != 0)
{
printf("%c",c[i]);
i = i+1;
}
}
