#include<stdio.h>

int main(){
    int N;
    printf("nhap vao so nguyen bat ki:");
    scanf("%d", &N);
    if(N%2==0){
        printf("%d la so chan", N);
    }    
    else
    printf("%d la so le", N);
    
    
    return 0;
}