#include<stdio.h>
void main()
{
int x,y,s,a=0;
printf("enter a value:\n");
scanf("%d",&x);
y=x;
while(x>0)
{
s=x%10;
a=a+(s*s*s);
x=x/10;
}
if(y==a)
{
printf("armstrong");
}
else
{
printf("not armstrong");
}
}
