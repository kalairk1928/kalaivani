
#include <stdio.h>
#include<string.h>
int main(void) {
	char c1[10],c2[20];
	int i,j;
	gets(c1);
	gets(c2);
	i=strlen(c1);
	for(j=0;c2[j]!='\0';i++,j++)
	{
		c1[i]=c2[j];	
	}
	c1[i]='\0';
	puts(c1);
	return 0;
}
