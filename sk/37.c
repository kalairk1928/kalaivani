#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the values:");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("the swapped values are:%d%d",a,b);
}
