#include<stdio.h>
void main()

{

int n,a=0,b=1,i;

scanf("%d",&n);

while(n!=1)

{

n=n/2;

a++;

}

for(i=0;i<a+1;i++)

b=b*2;

printf("%d",b);
}
