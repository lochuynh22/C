#include<stdio.h>


int main(){
    int a,b,c;
    printf("Nhap vao do dai ba canh cua mot tam giac\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    if( a+b>c && a+c>b&&b+c>a)
    printf("La ba canh tam giac");
    else
    printf("Khong la ba canh tam giac");
    return 0;
}