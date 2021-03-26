#include<stdio.h>
#include<ctype.h>

int main(){
    int letter1[26] = {0}, letter2[26] = {0};
    char c;
    printf("Enter first word :");
    for(int i = 0; (c = getchar()) != '\n'; i++){
        if(isalpha(c)){
            letter1[(tolower(c) - 'a')]++;
        }
        else{
            return 0;
        }
    }
    printf("Enter second word  : ");
    for(int i = 0; (c = getchar()) != '\n'; i++){
        if(isalpha(c)){
            letter2[(tolower(c) - 'a')]++;
        }
        else{
            return 0;
        }
    }
    int count = 0;
    for(int i = 0; i < 26; i++){
        if(letter1[i] == letter2[i]){
            count++;
        }
    }
    if(count == 26){
        printf("The words are anagrams.\n");
    }
    else{
        printf("The words are not anagrams.\n");
    }
    return 0;
}