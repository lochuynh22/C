#include<stdio.h>

void matran(int arr_1[100][100], int rows_1, int col_1){
    for(int i=0;i<rows_1;i++){
        for(int j=0;j<col_1;j++){
            printf("gia tri arr_1[%d][%d]:", i, j);
            scanf("%d",&arr_1[i][j]);
        }
    }
}
void inmatran(int arr_1[100][100], int rows_1, int col_1){
    printf("ma tran mang hai chieu la:\n");
    for(int i=0;i<rows_1;i++){
        for (int j=0;j<col_1;j++){
            printf("%d ", arr_1[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int row,col;
    printf("Nhap gia tri lan luot cua hang va cot:");
    scanf("%d %d", &row, &col);
    int arr_1[100][100];
    matran(arr_1,row,col);
    inmatran(arr_1,row,col);
    return 0;
}