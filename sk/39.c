
#include<stdio.h>
void main()
{
    int a[10],i,temp=0,n;
    for(i=0;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }
    temp=a[0];
for(i=0;i<=10;i++)
{
    
        if(a[0]<a[i])
        {
            temp=a[i];
        
} 
}
printf("%d\n",temp);
}
