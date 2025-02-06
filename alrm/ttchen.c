#include <stdio.h>

void thaoTacchen(int *arr, int x, int value, int size) {
    printf("%d",size);
    for (int i = size - 1; i >= x; i--) {
        arr[i + 1] = arr[i];
    }
    arr[x] = value;
}

int main() {
    int arr_1[7] = {5, 2, 1, 7, 10, 5}; 
    int size = sizeof(arr_1) / sizeof(int)-1; 

    int x, value;

    printf("Nhap vi tri can chen: ");
    scanf("%d", &x);
    printf("Nhap gia tri can chen: ");
    scanf("%d", &value);

    thaoTacchen(arr_1, x, value, size);

    printf("Mang sau khi chen la: ");
    for (int i = 0; i <= size; i++) {  
        printf("%d ", arr_1[i]);
    }

    return 0;
}
