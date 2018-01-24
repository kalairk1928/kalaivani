#include <stdio.h>
void main()
{
    char s;
    printf("Enter a character: ");
    scanf("%c",&s);

    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf("%c is an alphabet.",s);
    else
        printf("%c is not an alphabet.",s);
}
