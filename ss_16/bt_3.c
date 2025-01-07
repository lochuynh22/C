#include<stdio.h>
int tinhTong(int *a,int *b,int *sum){
    return *sum=*a+*b;
}
int main(){

    int a=100;
    int b=200;
    int sum;
    printf("%d", tinhTong(&a,&b,&sum));
    return 0;
}