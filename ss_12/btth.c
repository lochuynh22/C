#include<stdio.h>
void nhapmang(int n, int arr_1[100]){
    for(int i = 0; i<n;i++){
        printf("Arr_1[%d]:",i);
        scanf("%d",&arr_1[i]);
    }
}
int tong(int n, int arr_1[100]){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr_1[i];
    }
    return sum;
}
float avg(int tong,int n){
    return (float)tong/n;
}

int main(){
    int arr_1[100],n;
    printf("Nhap so phan tu:");
    scanf("%d", &n);
    nhapmang(n, arr_1);
    int sum=tong(n,arr_1);
    printf("tong la %d\n",sum);
    printf("Tbc:%.2f", avg(sum,n));
    return 0;
}