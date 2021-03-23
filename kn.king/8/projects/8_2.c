#include<stdio.h>
#include<stdbool.h>

int main(){
    int number[10] = {0};
    int digit;
    long long int n;
    printf("Enter a number: ");
    scanf("%lld", &n);
    while(n > 0){
        digit = n % 10;
            number[digit]++;
        n = n / 10;
    }
    printf("Digit:\t\t");
    for(int i = 0; i < 10; i++){
        printf(" %2d", i);
    }
    printf("\nOccurences:\t");
    for(int i = 0; i < 10; i++){
        printf(" %2d", number[i]);
    }
    printf("\n");
    return 0;
}