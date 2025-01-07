#include <stdio.h>

void capnhat(int *arr, int value, int loca, int n) {
    for (int i = n - 1; i >= loca; i--) {
        arr[i + 1] = arr[i];
    }
    arr[loca] = value;
}

int main() {
    int arr_1[6] = {5, 13, 63, 12, 9}; 
    int n = 5 ; 
    printf("Mang luc dau la arr_1[5] = {5, 13, 63, 12, 9}\n");
    int loca, value;
    printf("Nhap vi tri can sua: ");
    scanf("%d", &loca);
    printf("Nhap gia tri moi: ");
    scanf("%d", &value);
    capnhat(arr_1, value, loca,n);
    printf("Mang sau khi chen la: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr_1[i]);
    }
    printf("\n");

    return 0;
}
