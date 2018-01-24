#include <stdio.h>

 
void main(){
    char m;
    printf("Enter a Character: ");
    scanf("%c", &m);
    if(m == 'a' || m == 'e' || m =='i' || m=='o' || m=='u' || m=='A'
          || m=='E' || m=='I' || m=='O' || m=='U'){
        printf("%c is a Vowel\n", m);
    } else {
        printf("%c is a Consonant\n", m);
    }
    
}
