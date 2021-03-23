#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    char arr[10][10] = {'.'};
    for(int i = 0; i < 10; i++){
        for(int j =0 ; j < 10; j++){
            arr[j][i] = '.';
            printf("%c", arr[j][i]);
        }
        printf("\n");
    }
    char cursor = 'A';
    for(cursor;;cursor++){
        if(cursor == 'Z'){
            break;
        }
        else{
        srand((unsigned)time(NULL));
        int direction = rand() % 4 + 1;
        
        if(direction == 1){
            arr
        }
        }
    }
    return 0;
}