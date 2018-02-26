#include<stdio.h>
void main()
{
 int k;
 int c=0;
 char s[20];
 printf("Enter string : ");
 gets(s);
 for(k=0; s[k]!=NULL; k++)
 {
 if(s[k]==' ')
 {
   c++;
 }}
 printf("\nNumber of words in a sentence: %d",c+1);
}
