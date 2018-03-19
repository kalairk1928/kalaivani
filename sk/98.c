#include<stdio.h>
void main()
{
    int a[5],k,b=0;
    printf("enter the no");
    for(k=1;k<5;k++)
    {
       scanf("%d",&a[k]);
    }
    for(k=1;k<5;k++)
    {
        if(a[k]!=k)
        {
            printf("%d",k);
            break;
        }
    }
       
}
