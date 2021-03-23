#include<stdio.h>

int main(){
    int mm1, dd1 ,yy1, mm2, dd2, yy2, a, b ,c, e, f, g;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm1, &dd1, &yy1);
    printf("Enter second date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &mm2, &dd2, &yy2);
    if (yy1 > yy2 || (yy1 == yy2 && mm1 > mm2) || (yy1 == yy2 && mm1 == mm2 && dd1 > dd2)){
        a = yy2; e=yy1;
        b = dd2; f=dd1;
        c = mm2; g=mm1;
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", c, b, a, g, f, e);
    }
    else{
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", mm1, dd1, yy1, mm2, dd2, yy2);
    }
    
    return 0;
}