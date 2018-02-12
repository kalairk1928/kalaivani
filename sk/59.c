
#include<stdio.h>
void main()
{
    int a[10],i,t=0,n;
    for(i=0;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }
    t=a[0];
for(i=0;i<=10;i++)
{
    
        if(a[0]<a[i])
        {
            t=a[i];
        
} 
}
printf("%d\n",t);
}
