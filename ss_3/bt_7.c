#include<stdio.h>

int main(){
    int num, sum=0;
    printf("Nhap mot so nguyen co 4 chu so:");
    scanf("%d", &num);
    sum = (num % 10) + (num / 10 % 10) + (num / 100 % 10) + (num / 1000);
    printf("tong cac chu so la : %d\n", sum);
    return 0;
}