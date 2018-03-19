#include<stdio.h>
void main()
{
    int a,n1,n2=1;
    scanf("%d",&a);
    while(a!=0)
    {
        n1=a%10;
        n2=n2*n;
        a=a/10;
    }
    printf("the product is %d",n2);
}
    
