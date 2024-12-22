#include<stdio.h>

int main(){
    int check_1,found=0;
    int arr_1[3][3]={{2,1,4}, {3,2,7}, {4,8,1}};
    int row_1=sizeof(arr_1)/sizeof(arr_1[0]);
    int col_1=sizeof(arr_1[0])/sizeof(arr_1[0][0]);
    printf("Nhap vao mot phan tu bat ki: ");
    scanf("%d",&check_1);
    for(int i=0;i<row_1;i++){
        for(int j=0;j<col_1;j++){
            if(arr_1[i][j]==check_1){
                printf("vi tri phan tu trong mang la:arr_1[%d][%d]\n",i,j);
                found=1;
                break;
            }
        }
    }
    if(!(found))
        printf("Phan tu khong ton tai trong mang");
   
    
    return 0;
}   