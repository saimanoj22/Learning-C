#include <stdio.h>

int main(){
    int a, b, c, d, big1, big2, small1, small2;
    printf("Enter four integers :");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a > b){
        big1 = a;
        small1 = b;
    }
    else{
        big1 = b;
        small1 = a;
    }
    if(c > d){
        big2 = c;
        small2 = d;
    }
    else{
        big2 = d;
        small2 = c;
    }
    if(big1 > big2){
        printf("Largest : %d\n", big1);
    }else{
        printf("Largest : %d\n", big2);
    }
    if(small1 > small2){
        printf("Smallest : %d\n", small2);
    }
    else{
        printf("Smallest : %d\n", small1);
    }
    return 0;
}