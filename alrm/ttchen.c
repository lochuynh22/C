//thao tac chen trong mang
#include<stdio.h>
void thaoTacchen(int *arr,int x,int value,int size){
    for(int i=size-1;i>=x;i--){
        arr[i+1]=arr[i];
    }
    arr[x]=value;
    ++size;
}

int main(){
    int arr_1[6]={5,2,1,7,10,5};
    int x=sizeof(arr_1)/sizeof(int),value;
    printf("%d",x);
    int n;
    printf("Nhap vi tri can chen:");
    scanf("%d", &n);
    printf("Nhap gia tri can chen: ");
    scanf("%d",&value);
    thaoTacchen(arr_1, n, value,x);
    printf("Mang sau khi chen la: ");
    for (int i = 0; i <= x; i++) {
        printf("%d ", arr_1[i]);
    }

    return 0;
}