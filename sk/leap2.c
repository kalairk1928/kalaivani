#include <stdio.h>
 
void main()
{
  int y;
 
  printf("Enter a year to check if it is a leap year\n");
  scanf("%d", &y);
 
  if ( y%400 == 0)
    printf("%d is a leap year.\n", y);
  else if ( y%100 == 0)
    printf("%d is not a leap year.\n", y);
  else if ( y%4 == 0 )
    printf("%d is a leap year.\n", y);
  else
    printf("%d is not a leap year.\n", y);  
 
  
}
