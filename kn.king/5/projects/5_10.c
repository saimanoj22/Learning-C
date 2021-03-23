#include<stdio.h>

int main(){
    int n, tens_place;
    printf("Enter numerical grade : ");
    scanf("%d", &n);
    if(n > 100 || n < 0){
        printf("Not avalid subject grade.\n");
    }
    switch (n/10)
    {
    case 10 : case 9:
        printf("Letter grade : A\n");
        break;
    case 8:
        printf("Letter grade : B\n");
        break;
    case 7:
        printf("Letter grade : C\n");
        break;
    case 6:
        printf("Letter grade : D\n");
        break;
    case 5: case 4: case 3: case 2: case 1: case 0:
        printf("Letter grade : F\n");
        break;
    }
    return 0;
}