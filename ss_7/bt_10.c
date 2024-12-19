#include<stdio.h>

int main(){
    int n;
    printf("Nhap vao so phan tu cua mang:");
    scanf("%d", &n);
    int arr[n];
    int num;
    int sizeofarr=sizeof(arr)/sizeof(int);
    for(int i=0;i<sizeofarr;i++){
        printf("Nhap phan tu thu %d trong mang:", i);
        scanf("%d",&arr[i]);
        
}

    return 0;
}
