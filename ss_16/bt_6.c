//xây dựng hàm tìm kiếm phần tử có 2 tham số gồm 1 mảng và giá trị muốn tìm kiếm. Hàm có giá trị trả về là vị trí của phần tử tìm kiếm được. Gọi hàm và in kết quả trả về của hàm ra màn hình.
#include<stdio.h>
int search(int *arr, int value, int size){
    for(int i=0;i<size;i++){
        if(arr[i]==value)
        return i;
    }
    return -1;
}


int main(){
    int arr_1[]={6,1,7,3,10};
    int n=sizeof(arr_1)/sizeof(int),x;
    printf("Nhap gia tri can tim: ");
    scanf("%d",&x);
    int result = search(arr_1, x, n);
    if(result!=-1)
    printf("Vi tri gia tri can tim la: %d\n", result);
    else
    printf("Ko tim thay ket qua");
    return 0;
}