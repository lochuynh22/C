#include<stdio.h>
#include<math.h>
int main(){
    float money,month,rate,money_1,money_2;
    printf("Nhap vao tien gui:");
    scanf("%f", &money);
    printf("Nhap vao lai suat:");
    scanf("%f", &rate);
    printf("Nhap vao thang gui:");
    scanf("%f", &month);
    money_1=money*pow(1+rate/100 ,month);
    money_2=money_1-money;
    printf("So tien nhan duoc:%.3f \n",money_1);
    printf("So tien lai nhan duoc:%.3f \n",money_2);
    return 0;
}