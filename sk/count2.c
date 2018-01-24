#include <stdio.h>
void main()
{
    int s;
    int c = 0;

    printf("Enter an integer: ");
    scanf("%d", &s);

    while(s != 0)
    {
        
        s /= 10;
        ++c;
    }

printf("the count is",c);
}
