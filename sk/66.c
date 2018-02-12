#include<stdio.h>
void main()
{
int i,x,c=0;
i=2;
printf("enter a value:");
scanf("%d",&x);
while(i<x)
{
if(x%i==0)
{
c=c+1;
}
i++;
}
if(c==0)
{
printf("prime");
}
else
{
printf("not prime");
}
}
