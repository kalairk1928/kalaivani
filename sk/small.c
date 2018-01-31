#include<stdio.h>
void main()
{
    int a[10],i,temp=0,n,j;
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
    
        if(a[i]<a[j])
        {
            temp=a[i];
        }
        else
        {
            temp=a[j];
        }
} 
}
printf("%d\n",temp);
}
