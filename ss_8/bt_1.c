#include<stdio.h>
int main(){
    int arr_1[3][3]={{2,1,4}, {3,2,7}, {4,8,1}};
    int row_1=sizeof(arr_1)/sizeof(arr_1[0]);//ngang
    int col_1=sizeof(arr_1[0])/sizeof(arr_1[0][0]);//cot


    for(int i=0;i<row_1;i++){
        for(int j=0;j<col_1;j++){
            printf("arr_1[%d][%d]=%d\n",i,j,arr_1[i][j]);
        }
    }
    return 0;
}
