#include <stdio.h>
int main(void)
{
	int a[200],n,s,k;
	scanf("%d %d",&n,&s);
	for(k=0;k<n;k++)
	{
		scanf("%d",&a[k]);
	}
	for(k=0;k<n;k++)
	{
		if(a[k]==s)
		{
			printf("%d",a[k]);
			break;
		}
	}
  
     return 0;
}
