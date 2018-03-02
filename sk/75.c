#include <stdio.h>
#include<string.h>
int main(void) {
	char s[10];
	int n,i,b,c;
	scanf("%s",s);
	n=strlen(s);
	b=n%2;
	c=n/2;
	if(b==0)
	{
		 s[c]='*';
		 s[c-1]='*';
		 printf("%s",s);
	}
	else
	{
		s[c]='*';
		printf("%s",s);
	}
	return 0
}
