#include<stdio.h>

int main(){

    float base, height;
    printf("Nhap do dai canh tam giac:");
    scanf("%f", &base);
    printf("Nhap chieu cao cua tam giac:");
    scanf("%f", &height);
    float S=0.5*base*height;
    printf("Dien tich cua tam giac la:%.2f", S);
}