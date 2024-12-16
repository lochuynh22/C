#include<stdio.h>

int main(){
    int n;
    printf("Nhap gia tri bat ki");
    scanf("%d", &n);
    if(n<0||n>100)
    printf("Nhap so tu 0 ->100");
    else if(n>=90)
        printf("%d\n xuat sac",n);
    else if(n>=80 && n<=89)
        printf("%d\n gioi", n);
    else if(n>=70 && n<=79)
        printf("%d\n kha", n);
    else if(n>=60 && n<=69)
        printf("%d\n Trung binh", n);
    else
        printf("%d\n yeu", n);
    return 0;
}