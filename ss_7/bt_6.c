#include<stdio.h>

int main(){
    int arr_1[]={5,2,6,1,8};
    int sizeofarr_1=sizeof(arr_1)/sizeof(int);
    for(int i=0;i<sizeofarr_1;i++){
        if(arr_1[i]%2!=0){
            arr_1[i]+=2;
        }
        else if(arr_1[i]%2==0){
            arr_1[i]+=3;
        }
    }
    printf("Mang moi sau khi thay doi arr_1[]=");
    for(int i=0;i<sizeofarr_1;i++){
        printf("%d ",arr_1[i]);
    }

    return 0;
}