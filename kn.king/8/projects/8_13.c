#include <stdio.h>

int main(void) {
    char initial, word[20], c;
    printf("Enter first and last name : ");
    while((c = getchar()) == ' ')
        ;
    initial = c;
    while((getchar()) != ' ')
        ;
    for(int i = 0; (c=getchar()) != '\n'; i++){
        word[i] = c;
    }
    printf("You entered the name : ");
    for(int i = 0; i != '\0'; i++){
        printf("%c", word[i]);             // last name not printing 
    }                                      // wiil take a look after
    printf(", %c.\n", initial);
    return 0;
}