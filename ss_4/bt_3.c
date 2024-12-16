#include<stdio.h>

int main(){
    int n;
    printf("Nhap mot so nguyen bat ki:\n");
    scanf("%d", &n);
    if(n%5==0 && n%3==0)
    printf("Chia het cho ca 3 va 5");
    else if (n%5==0)
    printf("chia het cho 5");
    else if (n%3==0)
    printf("Chia het cho 3");
    else 
    printf("khong chia het cho 3 va 5 ");
    return 0;
}