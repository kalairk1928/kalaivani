
#include<stdio.h>
void main()
{
	int a,b,t;
	scanf("%d",&a);
	scanf("%d",&b);
	t=a*b;
	t=t%2;
	if(t==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
