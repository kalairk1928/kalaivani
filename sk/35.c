
 #include<stdio.h>
void main()
{
int i,c=0,n;
 char a[50]="kalai is good.234";
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]>='0'&&a[i]<='9')
  {
  c++;
  }
  }
   printf("%d",c);
   }
