#include<stdio.h>
//selectionsort
int main(){
    int arr_1[]={5,2,6,1,10,14,4};
    int n=sizeof(arr_1)/sizeof(int);
    for(int i=0;i<n-1;i++){
        int min_1=i;
        for(int j =i+1;j<n;j++){
            if(arr_1[j]<arr_1[min_1])
            min_1=j; 
        }
        int tmp=arr_1[min_1];
        arr_1[min_1]=arr_1[i];
        arr_1[i]=tmp;
    }
    for (int i=0; i<n;i++)
        printf("%d ", arr_1[i]);


    return 0;
}