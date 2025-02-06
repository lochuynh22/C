#include<stdio.h>
int bs(int a[], int n,int x){
    int left=0, right =n-1;
    while(left<=right){
        int mid_1=(left+right)/2;
        if( a[mid_1]==x){
            return 1;
        }
        else if(a[mid_1]<x)
            left=mid_1+1;
        else
            right= mid_1 -1;
    }
    return 0;
    
}   
void swp(int *a, int *b){
    int tmp=*a;
        *a=*b;
        *b=tmp;
}
void bbs(int a[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[i]>a[i+1])
            swp(&a[j],&a[j+1]);
        }
    }
}
int main(){
    int x=10;
    int arr_1[]={10,4,4,5,7,2,1,5};
    int n=sizeof(arr_1)/sizeof(int);
    bbs(arr_1, n);
    if(bs(arr_1, n,x)){
        printf("tim thay!\n");
    }
    else 
        printf("Ko thay\n");

    return 0;
}
