#include<stdio.h>

int main(){
    int n;
    printf("Nhap vao so phan tu cua mang:");
    scanf("%d", &n);
    int arr_1[n];
    int sizeofarr=sizeof(arr_1)/sizeof(int);
    for(int i=0;i<sizeofarr;){
        do{
            printf("Nhap phan tu thu %d trong mang:", i);
            scanf("%d",&arr_1[i]);
        }
        while(arr_1[i]%2==0);
            i++;
        
    }


    return 0;
}