#include<stdio.h>

int main(){
    int n, sum=0;
    printf("Nhap mot so nguyen duong bat ki:");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        sum+=i;
    printf("Tong cac so la %d\n", sum);


    return 0;
}
