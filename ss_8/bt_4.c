#include<stdio.h>

int main(){
    int row_1,col_1;
    printf("Nhap vao do dai hang cua mang:");
    scanf("%d", &row_1);
    printf("Nhap vao do dai cot cua mang:");
    scanf("%d", &col_1);
    int arr_1[row_1][col_1],max_arr_1=arr_1[-1][0];
    for(int i=0;i<row_1;i++){
        for(int j=0;j<col_1;j++){
            printf("Nhap gia tri cua mang arr_1[%d][%d]=",i,j );
            scanf("%d", &arr_1[i][j]);
            if(arr_1[i][j]>max_arr_1)
                max_arr_1=arr_1[i][j];
        }
    }
    printf("gia tri lon nhat cua mang la:%d\n",max_arr_1);


return 0;
}