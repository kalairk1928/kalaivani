#include <stdio.h>
#include<string.h>
int main(void) {
	int i;
	char c1[10],c2[10];
	gets(c1);
	gets(c2);
	for(i=0;c1[i]!='\0';i++)
	{
		if(c1[i]>c2[i])
		{
			printf("%s is greater",c1);
			break;
		}
		else if(c1[i]<c2[i])
		{
			printf("%s is greater",c2);
			break;
		}
		else
		{
			printf("both are equal");
			break;
		}
	}
	return 0;
}
