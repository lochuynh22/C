#include<stdio.h>

int main(){
    int arr_1[3][3]={{3,2,3},{7,5,6},{10,8,9}};
    int sum=0;

    for(int i=0;i<3;i++){
            printf("%d ",arr_1[i][3-i-1]);
            sum+=arr_1[i][3-i-1];
            printf("\n");
    }
    printf("Tong duong cheo phu:%d", sum);
        
    return 0;
}