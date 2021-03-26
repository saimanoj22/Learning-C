#include<stdio.h>

int main(){
    char message[80];
    int shift;
    char c;
    printf("Enter a message to be encrypted : ");
    for(int i = 0; (c = getchar()) != '\n' && i < 80; i++){
        message[i] = c;
    }
    printf("Enter shift amount : ");
    scanf("%d", &shift);
    printf("Encrypted message : ");
    for(int i = 0; message[i] != '\0'; i++){
        if(message[i] >= 'A' && message[i] <= 'Z'){
            printf("%c", (((message[i]-'A')+shift)%26)+'A');
        }
        else if(message[i] >= 'a' && message[i] <= 'z'){
            printf("%c",  (((message[i]-'a')+shift)%26)+'a');
        }
        else{
            printf("%c", message[i]);
        }
    }
    printf("\n");
    return 0;
}