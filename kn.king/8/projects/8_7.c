#include<stdio.h>

int main(){
    int a[5][5];
    int sum, sumv;
    for(int i = 0; i < 5; i++){
        printf("Enter row %d : ", i+1);
        for(int  j = 0; j < 5; j++){
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("Row totals : ");
    for(int i = 0; i < 5; i++){
        sum = 0;
        for(int  j = 0; j < 5; j++){
            sum = sum + a[i][j];
        }
        printf("%d ", sum);
    }
    printf("\nColumn totals : ");
    for(int i = 0; i < 5; i++){
        sumv = 0;
        for(int  j = 0; j < 5; j++){
            sumv = sumv + a[j][i];
        }
        printf("%d ", sumv);
    }
    printf("\n");
    return 0;
}