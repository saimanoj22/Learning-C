#include<stdio.h>

int main(){
    int a, b, remainder = 0;
    printf("Enter a fraction number in the format a/b :");
    scanf("%d/%d", &a, &b);
    int first = a, second = b;
    while(second != 0){
        remainder = first % second;
        first = second;
        second = remainder;
    }
    printf("Their simplest form is %d/%d\n", a/first, b/first);
    return 0;
}