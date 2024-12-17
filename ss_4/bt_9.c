#include<stdio.h>

int main(){
    int day, month, year;
    printf("Nhap vao ngay thang nam:\n");
    scanf("%d%d%d", &day, &month, &year);
    if(day<=0 || day>31 || month <1 || month >12 || year<1 || year >2024)
    printf("Ngay thang nam khong hop le");
    else 
    printf("Nhay thang nam hop le ");
    return 0;
}