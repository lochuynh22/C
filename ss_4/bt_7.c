#include<stdio.h>


int main(){
    int year;
    printf("Nhap vao mot nam bat ki:");
    scanf("%d", &year);
    if( year%400==0 || (year%4==0 && year%100!=0))
    printf("Nam vua nhap la nam nhuan");
    else
    printf("Nam vua nhap ko la nam nhuan");
    return 0;
}