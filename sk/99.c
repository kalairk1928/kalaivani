#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",((a*b)%c));
    return 0;
}
