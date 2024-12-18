#include<stdio.h>

int main(){
    int arr[5];
    int sizeofarr=sizeof(arr)/sizeof(int);
    for(int i=0;i<sizeofarr;i++){
        printf("Nhap phan tu thu %d cua mang arr: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Cac phan tu cua mang la: "); 
    for(int i = 0; i < 5; i++) { 
        printf("%d ", arr[i]); 
    } 
    printf("\n");
    return 0;
}