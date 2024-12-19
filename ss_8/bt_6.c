#include<stdio.h>

int main(){
    int arr_1[3][3]={{3,2,3},{7,5,6},{10,8,9}};
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i>=j &&j>=i){
            printf("%d ", arr_1[i][j]);
            sum+=arr_1[i][j];
            }
            printf(" ");
        }
        printf("\n");
    }
    printf("tong:%d", sum);
    return 0;
}
