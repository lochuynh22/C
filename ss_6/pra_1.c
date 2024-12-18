#include<stdio.h>

int main(){
    int n_1, n_2, n_3, n_4, n_5, sum=0;
    printf("Nhap 5 so nguyen bat ki");
    scanf("%d%d%d%d%d", &n_1,&n_2,&n_3,&n_4,&n_5);
    if(n_1%2!=0){
        sum+=n_1;
    }
     if(n_4%2!=0){
        sum+=n_4;
    }
     if(n_2%2!=0){
        sum+=n_2;
    }
     if(n_3%2!=0){
        sum+=n_3;
    }
     if(n_5%2!=0){
        sum+=n_5;
    }
    printf("tong cac so la %d",sum);
    return 0;
}