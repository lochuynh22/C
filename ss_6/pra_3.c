#include<stdio.h>

int main(){
    int pass=123450,check_pass;
    do{
        printf("Hay nhap mat khau:");
        scanf("%d", &check_pass);
    }
    while(!(pass==check_pass));
        printf("Mat khau chinh xac");

    return 0;
}