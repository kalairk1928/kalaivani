#include<stdio.h>
void main()
{
int a,b,c,x;
a=0;
b=1;
printf("enter a value:");
scanf("%d",&x);
printf("\n%d",a);
printf("\n%d",b);
do
{
c=a+b;
printf("\n%d",c);
a=b;
b=c;
}
while(c<x);
}
