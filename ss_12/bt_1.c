#include<stdio.h>
void tinhTong(int a, int b){
    int sum= a+b;
    printf("tong hai so la:%d",sum);
}
int main(){
    int x,y;
    printf("Nhap gia tri x va y:");
    scanf("%d %d", &x,&y);
    tinhTong(x, y);

    return 0;
}