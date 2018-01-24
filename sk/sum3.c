#include <stdio.h>
int main()
{
    int a, b, c = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&b);

    for(a=1; a <= b; ++a)
    {
        c += a;   // r= r+k;
    }

    printf("Sum = %d",c);

    return 0;
}
