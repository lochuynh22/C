#include<stdio.h>

int main(){
    int n;
    printf("Nhap vao mot thang: \n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Thang 1 co 31 ngay");
        break;
    case 2:
        printf("Thang 2 co 29 ngay");
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Thang 2 co 30 ngay");
        break;
    default:
        printf("Thang khong hop le");
        break;
    }

    return 0;
}