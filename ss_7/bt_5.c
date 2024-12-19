#include<stdio.h>

int main(){
    int arr_1[]={4,2,6,1,8};
    int sizeofarr_1=sizeof(arr_1)/sizeof(int);
    int max_arr=arr_1[0], min_arr=arr_1[0];
    printf("%d\n", sizeofarr_1);

    for(int i=1;i<sizeofarr_1;i++){
        if( arr_1[i]>max_arr){
            max_arr=arr_1[i];
        }
        if (arr_1[i]<min_arr)
        {
            min_arr=arr_1[i];
        }
        
    }
    printf("gia tri lon nhat cua mang la :%d\n", max_arr);
    printf("gia tri nho nhat cua mang la :%d\n", min_arr);


    return 0;
}
