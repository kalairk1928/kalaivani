

#include<stdio.h>
void main()
{
char s[50]="hai";
int i,flag;
for(i=0;s[i]!='\0';i++)
{
if(s[i]==s[i+1])
{
flag=0;
}
else
{
flag=1;
}
}
if(flag==1)
{
    printf("it is isogram");
    
}
}
