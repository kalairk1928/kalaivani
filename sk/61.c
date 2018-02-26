#include <stdio.h>
#include<string.h>
void main()
{
	char n[100];
	int a,i,m;
	scanf("%s",&n);
	scanf("%d",&a);
	m=strlen(n);
	for(i=0;i<a;i++)
	{
		printf("%c",n[i]);
	}
}
