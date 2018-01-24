#include <stdio.h>

 
void main(){
    char k;
    printf("Enter a Character: ");
    scanf("%c", &k);
    if(k == 'a' || k == 'e' || k =='i' || k=='o' || k=='u' || k=='A'
          || k=='E' || k=='I' || k=='O' || k=='U'){
        printf("%c is a Vowel\n", k);
    } else {
        printf("%c is a Consonant\n", k);
    }
    
}
