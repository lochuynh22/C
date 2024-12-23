#include <stdio.h>

int main() {
    int arr_1[] = {5, 2, 6, 1, 10, 14, 4};  
    int n = sizeof(arr_1) / sizeof(int);    
    int value, found = 0;

    printf("Nhap vao phan tu can kiem tra: ");
    scanf("%d", &value);

   
    for (int i = 0; i < n; i++) {
        if (arr_1[i] == value) {
            printf("Phan tu %d ton tai o vi tri %d trong mang.\n", value, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", value);
    }

    return 0;
}
