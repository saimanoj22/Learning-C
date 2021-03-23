#include<stdio.h>

int main(){
    int first, second, remainder = 0;
    printf("Enter two numbers:");   
    scanf("%d %d", &first, &second);
    while(second != 0){
        remainder = first % second;
        first = second;
        second = remainder;
    }
    printf("There G.C.D is :%d\n", first);
    return 0;
}