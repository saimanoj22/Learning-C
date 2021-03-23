#include<stdio.h>

int main(){
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, sum1, sum2, calc;
    printf("Enter the first 12 digits of the UPSC : ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);
    sum2 = n1+n3+n5+n7+n9+n11;
    sum1 = n2+n4+n6+n8+n10+n12;
    calc = 9-((((sum1*3)+sum2)-1)%10);
    printf("Check digit : %d\n", calc);
    return 0;
}