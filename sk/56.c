{
char a[20];
int i,al=0,d=0;
scanf("%s",a);
for( i=0;a[i]='\0';i++)
{
	if((a[i]>='a'&& a[i]<='z') ||(a[i]>='A'&& a[i]<='Z'))
	{	al++;
		
	}
	if(a[i]>=0 && a[i]<=9)
	{	d++;
		
	}
}
if(al>=1 && d>=1)
	printf("yes");
else
	printf("no");
	
}
