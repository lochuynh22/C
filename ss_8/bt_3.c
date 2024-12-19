#include<stdio.h>

int main(){
    int n;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d",&n);
    int arr_1[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Nhap gia tri cua mang arr_1[%d][%d]=",i,j );
            scanf("%d", &arr_1[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ", arr_1[i][j]);
        }
        printf("\n");
    }
return 0;

}