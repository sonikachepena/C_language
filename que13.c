#include <stdio.h>
int main()
{
int x,y;
printf("Enter a THREE digit Number : ");
scanf("%d",&x); /* Entered Number is 953 */
y = x % 10;
printf("%d",y);
}
