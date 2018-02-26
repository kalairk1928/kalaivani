#include<stdio.h>
void main()
{
int t;
char a[100];
gets(a);
t=a;
strrev(a);
if(a==t)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
}
