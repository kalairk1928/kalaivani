#include<stdio.h>
void main()
{
int a,b,t;
printf("enter the numbers:");
scanf("%d %d",&a,&b);
t=a;
a=b;
b=t;
printf("the swapped numbers are:%d %d",a,b);
}
