// xay dung ham sap xep tham so la 1 mang
#include<stdio.h>
void selectionSort(int *arr, int size){
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j =i+1;j<size;j++){
            if(arr[j]<arr[min])
            min=j; 
        }
        int tmp=arr[min];
        arr[min]=arr[i];
        arr[i]=tmp;
    }
}

int main(){
    int arr_1[]={5,1,7,3,6,2,4};
    int n=sizeof(arr_1)/sizeof(int);
    printf("Mang truoc khi sap xep:arr_1[]={5,1,7,3,6,2,4}\n");

    printf("Mang sau khi sap xep:");
    selectionSort(arr_1,n);
    for(int i=0;i<n;i++){
        printf(" %d ",arr_1[i]);
    }


    return 0;
}