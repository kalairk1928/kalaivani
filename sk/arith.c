#include <stdio.h>
int main() {
int f, d, t, v, s=0, i;

printf("Enter the number of terms in AP series\n");
scanf("%d", &t);

printf("Enter first term and common difference of AP series\n");
scanf("%d %d", &f, &d);
v = f;
printf("AP SERIES\n");
for(i = 0; i < t; i++) {
printf("%d ", v);
s += v;
v = v + d;
}

printf("\nSum of the AP series till %d terms is %d\n", t, s);

getch();
return 0;
}
