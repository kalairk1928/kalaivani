#include<stdio.h>
void main()
{
int a[100],n,sum=0,avg=0;
printf("enter a count:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
printf("the sum is:%d",sum);
printf("avg is:%d",avg);
}
