#include<stdio.h>
#include<string.h>
void main()
{
    char b[20];
    int i,j,temp,k;
    scanf("%s",b);
    k=strlen(b);
    for(i=0;i<k;i++)
    {
        for(j=i;j<k;j++)
        {   if(b[i]>b[j])
            {
            temp=b[i];
            b[i]=b[j];
            b[j]=temp;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%c",b[i]);
    }
}
