#include<stdio.h>

int main(){
    float amount;
    printf("Enter amount :");
    scanf("%f", &amount);
    printf("With Tax added : %.2f\n", amount + (amount*0.05));
    return 0;
}