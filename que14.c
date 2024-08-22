#include <stdio.h>
int main()
{
int x,y,z;
printf("Enter a THREE digit Number : ");
scanf("%d",&x); /* Entered Number is 678 */
y = x / 10;
z = y % 10;
printf("%d",z);
}
