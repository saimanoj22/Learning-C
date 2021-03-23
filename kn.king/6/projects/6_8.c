#include<stdio.h>

int main(){
    int days, start;
    printf("Enter number of days in a month :");
    scanf("%d", &days);
    printf("Enter starting day of the week (Sun=1 - Sat=7) :");
    scanf("%d", &start);
    int temp = start;
    while(start != 1){
        printf("   ");
        start--;
    }
    for(int i = 1; i <= days; i++){
        printf("%3d", i);
        if((i+temp) % 7 == 1){
            printf("\n");
        }
    }
    printf("\n");
    return  0;
}