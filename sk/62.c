#include <stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int i,k,s;
    scanf("%s",a);
    k=strlen(a);
    if(k==8)
    {
        for(i=0;i<k;i++)
        {
            if(a[i]=='1'||a[i]=='0')
        {
        }
        }
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
