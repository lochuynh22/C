#include<stdio.h>
int hieu;
int tich;
float thuong;
int sum;
int a=100;
int b=200;
int main(){
    hieu=a-b;
    tich=a*b;
    thuong=1.0*a/b;
    sum=a+b;
    printf("Tong hai so la :%d\n", sum);
    printf("Tich hai so la :%d\n", tich);
    printf("Thuong hai so la :%.1f\n", thuong);
    printf("Hieu hai so la :%d\n", hieu);

   return 0;
}