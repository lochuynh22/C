//thao tac xoa trong mang
#include<stdio.h>
void thaotacXoa(int *arr,int x,int *size){
    for(int i=x;i<=*size-1;i++){
        arr[i]=arr[i+1];
    }
    --(*size);
}

int main(){
    int arr_1[6]={5,2,1,7,10,5};
    int x=sizeof(arr_1)/sizeof(int);
    int n;
    printf("Nhap vi tri can xoa:");
    scanf("%d", &n);
    thaotacXoa(arr_1, n, &x);
    printf("Mang sau khi xoa la: ");
    for (int i = 0; i < x; i++) {
        printf("%d ", arr_1[i]);
    }

    return 0;
}