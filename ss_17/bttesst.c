#include<stdio.h>
#define MAX 100

void nhapMang(int arr[], int *n){
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",n);
    printf("Nhap phan tu cua mang: \n");
    for(int i=0;i<*n;i++){
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
}
void hienMang(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("arr[%d]=%d \n",i, arr[i]);
    }
    printf("\n");
}
void themPhanTuDauMang(int arr[],int *n){
    int value;
    printf("Nhap gia tri can them: ");
    scanf("%d",&value);
    for(int i=*n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=value;
    (*n)++;
}
void swap(int *a, int *b){
    int tmp=*a;
        *a=*b;
        *b=tmp;
}
void giamdanBBs(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n -i -1;j ++){
            if(arr[j]<arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void xoaPhanTu(int arr[], int *n, int y){
    if(y<0 || y>*n) 
    return ;
    else{
        for(int i=y;i<*n-1;i++){
            arr[i]=arr[i+1];
        }
    (*n)--;
    }
}
int lonThuHai(int arr[], int n){
    int fist=arr[0], scond =-1;
    for(int i=1;i<n;i++){
        if(arr[i]>fist){
            scond=fist;
            fist=arr[i];
        }
        else if(arr[i]>scond && arr[i]!=fist){
            scond=arr[i];
        }
    }
    return scond;
}
void demChanLe(int arr[], int n){
    int chan=0, le=0;
    for(int i=0; i < n; i++){
        if(arr[i]%2==0)
        chan ++;
        else
        le++;
    }
    printf("So phan tu: Chan=%d, le=%d\n", chan, le);
} 
int main(){
    int c, n=0;
    int arr[MAX];
    int loca;
    do{
        printf("1.\n");
        printf("2.\n");
        printf("3.\n");
        printf("4.\n");
        printf("5.\n");
        printf("Nhap lua chon cua ban ");
        scanf("%d",&c);
    switch (c)
    {
    case 1:
        nhapMang(arr,&n);
        break;
    case 2:
        hienMang(arr,n);
        break;
    case 3:
        themPhanTuDauMang(arr,&n);
        break;
    case 4:
        giamdanBBs(arr,n);
        break;
    case 5:
        printf("Nhap vi tri can xoa:");
        scanf("%d",&loca);
        xoaPhanTu(arr,&n,loca);
        break;
    case 6:
        printf("gia tri lon thu hai la: %d", lonThuHai(arr,n));
        break;
    case 7:
        demChanLe(arr, n);
        break;
    default:
        printf("Luua chon cua ban khong hop le!\n");
        break;
    }
    }while(c!=6);
    return 0;
}