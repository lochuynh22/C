#include<stdio.h>
void capnhat(int*arr,int*value,int*loca,int*n){
    for(int i=*n-1;i>=*loca;i--){
        *arr(i+1)=*arr(i+0);
    }
    arr[loca]=value;
    ++n;
}
int main(){
    int arr_1[5]={5,13,63,12,9}
    int n=sizeof(arr_1)/sizeof(int);
    printf("mang luc dau la arr_1[5]={5,13,63,12,9}");
    int loca,value;
    printf("Nhap vi tri can sua:");
    scanf("%d",&loca);
    printf("Nhap gia tri moi");
    scanf("%d"&value);
    printf("Mang sau khi chen la:");
    capnhat(arr_1,value,loca,n);
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }


    return 0;
}