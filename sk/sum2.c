#include<stdio.h>
void main()
{
int s,x,k=0;
printf("enter a value");
scanff("%d",&x);
for(s=1;s<=x;s++)
{
k=k+s;
printf("%d,%d",s,k);
}
}
