#include<stdio.h>

int main(){
    int std, start, end;
    printf("Enter phone number [(xxx) xxx-xxxx] : ");
    scanf("(%d) %d-%d", &std, &start, &end);
    printf("You entered %d.%d.%d\n", std, start, end);
    return 0;
}