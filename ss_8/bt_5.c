#include<stdio.h>

int main(){
    int arr_1[3][3]={{3,2,3},{7,5,6},{10,8,9}};
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ", arr_1[i][j]);
            if(i==0||i==2||j==0||j==2)
            sum+=arr_1[i][j];
        }
        printf("\n");
    }
    printf("%d", sum);
    return 0;
}