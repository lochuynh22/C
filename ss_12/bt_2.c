#include<stdio.h>
void inMang(int arr_1[]){
    for(int i=0; i<5;i++){
        printf("%d ", arr_1[i]);
    }
}

int main(){
    int arr[5]={5,1,7,3,2};
    inMang(arr);
}