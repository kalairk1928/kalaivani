#include <stdio.h>
int main()
{
    int n,n2, k, g;
    printf("Enter two integers: ");
    scanf("%d %d", &n, &n2);
    for(k=1; k <= n && k <= n2; ++k)
    {
       
        if(n%k==0 && n2%k==0)
            g = k;
    }
    printf("G.C.D of %d and %d is %d", n, n2, g);
    return 0;
}
