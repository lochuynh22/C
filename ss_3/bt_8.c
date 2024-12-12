#include<stdio.h>

int main(){
    int num, reverse_num=0;
    printf("Nhap mot so nguyen co 4 chu so:");
    scanf("%d", &num);
    reverse_num += (num%10)*1000+(num % 100)*100+(num%1000)*10;
    printf("So nghich dao la:%d", reverse_num);

    return 0;
}