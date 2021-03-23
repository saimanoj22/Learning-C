#include<stdio.h>
#include<stdbool.h>

int main(){
    bool digits_in[10] = {false}, repeated[10] = {false};
    int digit;
    long int n;
    printf("Enter a Number : ");
    scanf("%ld", &n);
    while(n > 0){
        digit = n % 10;
        if(digits_in[digit]){
            repeated[digit] = true;
        }
        digits_in[digit] = true;
        n = n / 10;
    }
    printf("Repeated digits:");
    for(int i = 0; i < 10; i++){
        if(repeated[i]){
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}