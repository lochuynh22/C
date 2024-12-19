#include<stdio.h>

int main(){
    int n, sum=0;
    printf("Nhap gia tri n:\n");
    scanf("%d", &n);
    int arr_1[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Nhap vao gia tri arr_1[%d][%d]:", i, j);
            scanf("%d", &arr_1[i][j]);
        }
    }
    printf("Ma tran:\n");
    for(int i=0; i<n;i++){
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr_1[i][j]);
        }
    printf("\n");        
    }
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(i==0||i==n-1||j==0||j==n-1){
            printf("%d ",arr_1[i][j]);
            sum+=arr_1[i][j];
           }
           else
           printf("  ");
           
        }
        printf("\n");  
    }
    int sum_1=0;
    printf("%d\n", sum);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j && i<=j){
                printf("%d  ", arr_1[i][j]);
                sum_1+=arr_1[i][j];
            }
            printf(" ");
        }
        printf("\n");
        }
    printf("Gia tri cheo la: %d", sum_1);

    return 0;
}
