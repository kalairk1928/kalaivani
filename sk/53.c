#include<stdio.h>
void main()
{
int x,s=0;
printf("enter a value:");
scanf("%d",&x);
while(x>0)
{
s=s+(x%10);
x=x/10;
}
printf("sum of digit is:%d",s);
}
