#include<stdio.h>

int main(){
    int item_number, mm, dd, yyyy;
    float unit_price;
    printf("Enter item number :");
    scanf("%d", &item_number);
    printf("Enter unit price : ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);
    printf("Item\tUnit\t\tPurchase\n\tPrice\t\tDate\n");
    printf("%d\t$%8.2f\t%.2d/%.2d/%.4d\n", item_number, unit_price, mm, dd, yyyy);
    return 0;
}