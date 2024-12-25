#include<stdio.h>
int SoLonNhat(int arr_1[], int n){
    int max_1=arr_1[0];
    for(int i=1;i<n;i++){
        if(max_1<arr_1[i])
            max_1=arr_1[i];
    }
    return max_1;
}


int main(){
    int arr_1[5]={3,7,1,10,41};
    int n=sizeof(arr_1)/sizeof(int);
    int max_1=SoLonNhat(arr_1,n);
    printf("SO lon nhat cua mang la: %d", max_1);

    return 0;
}