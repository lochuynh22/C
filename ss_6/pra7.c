#include<stdio.h>

int main(){
    int num;
    printf("Nhap mot so nguyen bat ki:");
    scanf("%d",&num);
    printf("Uoc cua %d la:",num);
    for(int i=1;i<=num;++i){
        if(num % i==0)
            printf("%d ",i);
    }
    return 0;
}