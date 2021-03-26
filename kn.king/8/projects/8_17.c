#include<stdio.h>

int main(){
    int size;
    printf("Enter odd number between 1 to 99 : ");
    scanf("%d", &size);
    int square[size][size];
    for(int i = 0; i < size; i++){
        for(int j = 0 ; j < size ; j++){
            square[i][j] = 0;
        }
    }
    //square[0][size/2] = 1;
    int a = 0, b = size/2;
    square[a][b] = 1;
    int count  = 2;
    while(count <= size*size){
        a--;b++;
        if(a<0){
            a = size + a;
        }
        if(a>=size){
            a = a - size;
        }
        if(b >=size){
            b = b - size;
        }
        if(b < 0){
            b = size + b;
        }
        if(square[a][b] == 0){
            square[a][b] = count;
        }
        else if(square[a][b] != 0){
            a = a + 2;
            b = b - 1;
            if(a<0){
                a = size + a;
            }
            if(a>=size){
                a = a - size;
            }
            if(b >=size){
                b = b - size;
            }
            if(b < 0){
                b = size + b;
            }
            square[a][b] = count;
        }
        count++;
    }
    
    
    for(int i = 0; i < size; i++){
        for(int j = 0 ; j < size ; j++){
            printf("%4d ", square[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}