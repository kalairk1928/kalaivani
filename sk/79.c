#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the two numbers:");
    scanf("%d\t%d",&a,&b);
    c=a*b;
    printf("%d",c);
    if(a==b)
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
    }
    
}
