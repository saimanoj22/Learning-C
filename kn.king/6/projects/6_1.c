#include<stdio.h>

int main(){
    float n, number, max;
    while(n > 0){
        printf("Enter a Number:");
        scanf("%f", &number);
        if(max < number){
            max  = number;
        }
        if(number == 0 || number < 0){
            break;
        }
    }
    printf("\nThe largest number is : %.2f\n", max);
    return 0;
}