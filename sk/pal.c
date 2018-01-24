#include <stdio.h>
int main()
{
    int a, b= 0, k,s;

    printf("Enter an integer: ");
    scanf("%d", &a);
    s = a;
    while( a!=0 )
    {
        k = a%10;
        b = b*10 + k;
        a /= 10;
    }
    if (s== b)
        printf("%d is a palindrome.", s);
    else
        printf("%d is not a palindrome.", s);
    
    return 0;
    }
