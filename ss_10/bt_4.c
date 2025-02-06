#include<stdio.h>
//selectionsort tim phan tu be nhat trong moi lan tim dem len vtri 1st

void swap(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
int main(){
    int arr_1[]={5,2,6,1,10,14,4};
    int n=sizeof(arr_1)/sizeof(int);
    for(int i=0;i<n-1;i++){
        int min_1=i;
        for(int j =i+1;j<n;j++){
            if(arr_1[j]<arr_1[min_1])
            min_1=j; 
        }
        swap(&arr_1[min_1],&arr_1[i]);
    }
    for (int i=0; i<n;i++)
        printf("%d ", arr_1[i]);


    return 0;
}