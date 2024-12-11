#include<stdio.h>


int main()
{
    float dt, da, dv;
    printf("Nhap diem toan:");
    scanf("%f", &dt);
    printf("Nhap diem anh:");
    scanf("%f", &da);
    printf("Nhap diem van:");
    scanf("%f", &dv);
    float sum= dt+da+dv;
    float avg= 1.0*sum/3;
    printf("Tong:%.2f\n", sum);
    printf("Trung binh ba mon: %.2f", avg);
    return 0;
}