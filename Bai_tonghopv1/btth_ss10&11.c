#include <stdio.h>

//(Insertion Sort)
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && key > arr[i]) { 
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

//(Selection Sort)
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_idx]) { 
                max_idx = j;
            }
        }
        int temp = arr[max_idx];
        arr[max_idx] = arr[i];
        arr[i] = temp;
    }
}

//(Bubble Sort)
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {  
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, c;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr_1[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr_1[i]);
    }
    
    printf("==MENU==\n");
    printf("1. In ra cac gia tri cua mang\n");
    printf("2. Su dung Insertion Sort sap xep mang giam dan va in ra\n");
    printf("3. Su dung Selection Sort sap xep mang giam dan va in ra\n");
    printf("4. Su dung Bubble Sort sap xep mang giam dan va in ra\n");
    printf("5. Thoat\n");
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &c);
    
    switch (c) {
    case 1:
        printf("Cac gia tri cua mang: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr_1[i]);
        }
        printf("\n");
        break;
    case 2:
        insertionSort(arr_1, n);
        printf("Mang sau khi sap xep bang Insertion Sort (giam dan): ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr_1[i]);
        }
        printf("\n");
        break;
    case 3:
        selectionSort(arr_1, n);
        printf("Mang sau khi sap xep bang Selection Sort (giam dan): ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr_1[i]);
        }
        printf("\n");
        break;
    case 4:
        bubbleSort(arr_1, n);
        printf("Mang sau khi sap xep bang Bubble Sort (giam dan): ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr_1[i]);
        }
        printf("\n");
        break;
    case 5:
        printf("Thoat chuong trinh.\n");
        break;
    default:
        printf("Lua chon khong hop le.\n");
        break;
    }

    return 0;
}
