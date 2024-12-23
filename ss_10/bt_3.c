#include <stdio.h>

int main() {
    int arr_1[] = {5, 3, 9, 3, 10, 1};  
    int n = sizeof(arr_1) / sizeof(int);  


    for (int i = 1; i < n; i++) {
        int key = arr_1[i];
        int j = i - 1;

        while (j >= 0 && arr_1[j] > key) {
            arr_1[j + 1] = arr_1[j];
            j = j - 1;
        }
        arr_1[j + 1] = key;
    }


    printf("Mang sau khi sap xep la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr_1[i]);
    }
    printf("\n");

    return 0;
}
