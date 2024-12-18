#include<stdio.h>

int main(){
    int rows_1, col_1;
    printf("Nhap vao so hang cua mang 2 chieu:");
    scanf("%d", &rows_1);
    printf("Nhap vao so cot cua mang 2 chieu:");
    scanf("%d", &col_1);
    int arr_1[rows_1][col_1];
    int sizeofarr_1=sizeof(arr_1)/sizeof(int);
    for(int i=0;i<rows_1;i++){
        for(int j=0;j<col_1;j++){
            printf("gia tri arr_1[%d][%d]:", i, j);
            scanf("%d",&arr_1[i][j]);
        }
    }
    printf("ma tran mang hai chieu la:\n");
    for(int i=0;i<rows_1;i++){
        for (int j=0;j<col_1;j++){
            printf("%d ", arr_1[i][j]);
        }
        printf("\n");
    }



    return 0;
}