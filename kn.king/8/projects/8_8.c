#include<stdio.h>

int main(){
    int a[5][5];
    int sum, sumv, total = 0;
    long long int max = 0, min=1000000;
    for(int i = 0; i < 5; i++){
        printf("Enter scores of student %d : ", i+1);
        for(int  j = 0; j < 5; j++){
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("Total scores of each student : ");
    for(int i = 0; i < 5; i++){
        sum = 0;
        for(int  j = 0; j < 5; j++){
            sum = sum + a[i][j];
        }
        if(max <= sum){
            max = sum;
        }
        if(min >= sum){
            min = sum;
        }
        printf("%d ", sum);
        total = total + sum;
    }
    printf("\n");   
    printf("Average score of class : %d\n", total/5);
    printf("Maximum score : %lld\n", max);
    printf("Minimum score : %lld\n", min);
    printf("\n");
    return 0;
}