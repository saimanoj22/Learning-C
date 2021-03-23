#include<stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if(n>=0 && n<10){
        printf("Your number has one digit.\n");
    }
    if(n>9 && n<100){
        printf("Your number has two digits.\n");
    }
    if(n>99 && n<1000){
        printf("Your number has three digits.\n");
    }
    if(n>999 && n<10000){
        printf("Your number has four digits.\n");
    }
    return 0;
}