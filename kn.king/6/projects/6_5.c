#include<stdio.h>

int main(){
    int number, remainder = 0;
    printf("Enter a number :");
    scanf("%d", &number);
    printf("The reversed digit number is :");
    do{
        remainder = number % 10;
        number = number / 10;
        printf("%d", remainder);
    }while(number != 0);
    printf("\n");
    return 0;
}