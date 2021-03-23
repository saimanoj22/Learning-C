#include<stdio.h>

int main(){

    float r ;
    printf("Enter radius of sphere :");
    scanf("%f", &r);
    float v = (4.0/3.0) * 3.14 * (r*r*r);
    printf("%f\n", v);
    return 0;
}