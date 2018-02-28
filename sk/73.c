#include<stdio.h>
void main()
{
    int n,l,r;
    printf("enter a number:");
    scanf("%d",&n);
    printf("enter the limits:");
    scanf("%d",&l);
    scanf("%d",&r);
    if(n>l||n<r)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
