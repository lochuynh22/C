#include<stdio.h>

int main(){
    int N;
    printf("Nhap vao 1 so bat ki:");
    scanf("%d", &N);

    if(N>0){
        printf("%d la so duong",N);

    }
    else if(N<0){
        printf("%d la so am",N);
    }

    return 0;
}