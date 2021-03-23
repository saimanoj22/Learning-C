#include<stdio.h>

int main(){
    int num1, num2, den1, den2, result_num, result_den;
    printf("Enter two fractions seperated by plus sign :");
    scanf("%d/%d+%d/%d", &num1, &den1, &num2, &den2);
    result_num = (num1 * den2) + (num2 * den1);
    result_den = den2 * den1;
    printf("The sum is %d/%d\n", result_num, result_den);
    return 0;
}