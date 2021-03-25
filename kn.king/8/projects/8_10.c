#include<stdio.h>

int main(){
    int departure[8]={480,583,679,767,840,945,1140,1305};
    int arrival[8]={616,712,811,900,968,1075,1280,1438};
    int time, hour, minute;
    printf("Enter a 24-format time : ");
    scanf("%d:%d", &hour, &minute);
    time = (hour*60) + minute;
    int dh, dm, dc, ah, am, ac;
    for(int i = 0; i < 7; i++){
        if(time < departure[i]+(departure[i+1]-departure[i])/2){
            if((departure[i] / 60)>12){
                dh = (departure[i] / 60) - 12;
            }
            else{
                dh = departure[i] / 60;
            }
            dm = departure[i] % 60;
            if(departure[i]/60 > 11){
                dc = 'p';
            }
            else{
                dc = 'a';
            }

            if((arrival[i] / 60)>12){
                ah = (arrival[i] / 60) - 12;
            }
            else{
                ah = arrival[i] / 60;
            }
            am = arrival[i] % 60;
            if(departure[i]/60 > 11){
                ac = 'p';
            }
            else{
                ac = 'a';
            }

            printf("Closest departure time is %d:%.2d %c.m.\n", dh, dm, dc);
            printf("Arriving at %d:%.2d %c.m.\n", ah, am, ac);
            return 0;
        }
    }
    if(departure[7] / 60 > 12){
        dh = departure[7] / 60 - 12;
    }
    else{
        dh = departure[7] / 60;
    }
    dm = departure[7] % 60;
    if(departure[7] / 60 > 11){
        dc = 'p';
    }
    else{
        dc = 'a';
    }

    if(arrival[7] / 60 > 12){
        ah = arrival[7] / 60 - 12;
    }
    else{
        ah = arrival[7] / 60;
    }
    am = arrival[7] % 60;
    if(arrival[7] / 60 > 11){
        ac = 'p';
    }
    else{
        ac = 'a';
    }
    printf("Closest departure time is %d:%.2d %c.m.\n", dh, dm, dc);
    printf("Arriving at %d:%.2d %c.m.\n", ah, am, ac);
    return 0;
}