#include<stdio.h>
void main()
{
int x,c=0;
printf("enter a number:");
scanf("%d",&x);
while(x>0)
{
c=c+1;
x=x/10;
}
printf("the number of digits are:%d\n",c);
}
