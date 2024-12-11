#include<stdio.h>


int main(){
    int tc;
    printf("Hay nhap nhiet do Celsius:");
    scanf("%d", &tc);
    float tf=(tc*1.8)+32;
    printf("Nhiet do cua Fahrenheit la: %.2f", tf);



    return 0;
}