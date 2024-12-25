#include<stdio.h>
int main(){
    int a, b, c;
    printf("Nhap a:");
    scanf("%d", &a);
    printf("Nhap b:");
    scanf("%d", &b);
    printf("Nhap c:");
    scanf("%d", &c);
    int sum= a+b+c;
    float avg= 1.0*sum/3;
    printf("Tong cua ba so la :%d", sum);
    printf("Trung binh cong cu aba so la:%.2f", avg);
    return 0;

}