#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char c;
    char message[100] = {0};
    int i;
    printf("Enter message : ");
    while((c = getchar()) != '\n' && i < 100){
        message[i++] = c;
    }
    printf("In B1FF speak : ");
    for(i = 0; i < 100; i++){
        switch(toupper(message[i])){
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
            case 'S':
                putchar('5');
                break;
            default:
                putchar(toupper(message[i]));
                break;
        }
    }
    printf("!!!!!!!!!!\n");
    return 0;
}