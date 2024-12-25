#include<stdio.h>

int main(){
    int time;
    float money=0;
    float time_1,phu_cap;
    printf("So gio ban lam duoc:");
    scanf("%d", &time);
    printf("muc luong trong 1 gio lam:");
    scanf("%f", &time_1);
    if(time>160){
        money=time_1*time;
        phu_cap=money*0.1;
        money+=phu_cap;
    }
    else{
        money=time_1*time;
    }
    printf("Luong nhan:%.1f\n", money);
    printf("Phu cap:%.1f", phu_cap);
    return 0;
}