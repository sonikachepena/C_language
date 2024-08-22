#include <stdio.h>
int sm(char *s,char *d);
int main()
{
char s[20] = "Surabee";
char d[10] = "Surabee ";
if(sm(s,d) == 1)
{
printf("Both the strings are equal\n");
}
else
{
printf("Both the strings are not equal\n");
}
}
int sm(char *src,char *dst)
{
while(*src)
{
if(*src++ != *dst++)
{
return(0);
}
}
if(*dst != 0)
{
return(0);
}
return(1);
}
