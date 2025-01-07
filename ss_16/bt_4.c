#include<stdio.h>
void inMang(int*arr_1,int size){
    for(int i=0;i<size;i++)
    printf("%d\t",*(arr_1+i));
}


int main(){
    int arr_1[5]={6,4,1,2,8};
    inMang(arr_1,5);

    return 0;
}