#include <stdio.h>
int main()
{
char c[8] = "Surabee";
char b[8] = "Welcome";
int i;
for(i=0; i<8; i++)
{
c[i] = b[i];
}
printf("%s",c);
}