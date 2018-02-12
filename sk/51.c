#include <stdio.h>
void main()
{
	int n,t,a,b,c,d;
	scanf("%d",&n);
	t=n;
	if(t!=0)
	{
		a=t/100;
		b=t%100;
		c=b/10;
		d=b%10;
	}
	printf("%d %d %d",a,c,d);
}
