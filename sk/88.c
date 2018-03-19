#include <stdio.h>
int main(void)
{
    int n, n1, lcm;
    scanf("%d %d", &n, &n1);
    lcm= (n>n1) ? n : n1;
    while(1)
    {
        if( lcm%n==0 &&lcm%n1==0 )
        {
            printf("%d",lcm);
            break;
        }
        ++lcm;
    }
    return 0;
}
