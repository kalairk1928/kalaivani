#include<stdio.h>
void main()
{
int a[6],temp=0,n,i,j;
printf("enter a count:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}}
for(i=0;i<n;i++)
{
printf("the sorted array is:%d\n",a[i]);
}
}
