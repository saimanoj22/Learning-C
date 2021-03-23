#include<stdio.h>

int main(){
    int number;
    printf("Enter a three-digit number :");
    scanf("%d", &number);
    printf("The reversal is : %d%d%d\n", number%10, (number/10)%10, ((number/10)/10)%10);
    return 0;
}