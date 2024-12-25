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

int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    int a[n];
        for(int i=0;i<n;i++){
            scanf("%d", &a[i]);
        }
    printf("%d",bs(a,n,x));

    return 0;
}
