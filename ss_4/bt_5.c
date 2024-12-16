#include<stdio.h>


int main(){
    int a, b, c;
    printf("Nhap 3 so nguyen bat ki:\n");
    scanf("%d\n%d\n%d", &a,&b,&c);
    if(c<b && c>a)
    printf(" %d<%d<%d so thu 3 nam giua hai so ", a,c,b);
    else
    printf("so thu 3 khong nam giua hai so");
    return 0;
}