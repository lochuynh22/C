#include <stdio.h>
#include <stdbool.h>

// Hàm d? nh?p các ph?n t? c?a m?ng
void nhapMang(int arr[], int *n) {
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Hàm d? hi?n th? các ph?n t? c?a m?ng
void hienThiMang(int arr[], int n) {
    printf("Cac gia tri cua mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int demPhanTuChan(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}


int timGiaTriLonThuHai(int arr[], int n) {
    int first = arr[0], second = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}


void themPhanTuDauMang(int arr[], int *n, int value) {
    for (int i = *n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    (*n)++;
}

void xoaPhanTuTaiViTri(int arr[], int *n, int pos) {
    if (pos < 0 || pos >= *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

void sapXepGiamDanInsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) {
            return mid; 
        }
        if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; 
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}


void inSoNguyenToVaBinhPhuong(int arr[], int n) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            found = true;
            printf("So nguyen to: %d, Binh phuong: %d\n", arr[i], arr[i] * arr[i]);
        }
    }
    if (!found) {
        printf("Khong co so nguyen to nao trong mang.\n");
    }
}

void sapXepGiamDanBubbleSort(int arr[], int n) {
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
    int arr[100]; 
    int n = 0, c;

    do {
        printf("==MENU==\n");
        printf("1. Nhap so phan tu va gia tri trong mang\n");
        printf("2. In ra gia tri trong mang\n");
        printf("3. Dem so luong phan tu chan trong mang\n");
        printf("4. Tim gia tri lon thu hai trong mang\n");
        printf("5. Them mot phan tu vao dau mang\n");
        printf("6. Xoa mot phan tu tai vi tri cu the\n");
        printf("7. Sap xep mang theo thu tu giam dan (Insertion Sort)\n");
        printf("8. Tim kiem phan tu trong mang (Binary Search)\n");
        printf("9. In ra cac so nguyen to trong mang va binh phuong cua chung\n");
        printf("10. Sap xep mang theo thu tu giam dan (Bubble Sort)\n");
        printf("11. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &c);

        switch (c) {
            case 1:
                nhapMang(arr, &n);
                break;
            case 2:
                hienThiMang(arr, n);
                break;
            case 3:
                printf("So luong phan tu chan trong mang: %d\n", demPhanTuChan(arr, n));
                break;
            case 4:
                printf("Gia tri lon thu hai trong mang: %d\n", timGiaTriLonThuHai(arr, n));
                break;
            case 5:
                int value;
                printf("Nhap gia tri can them vao dau mang: ");
                scanf("%d", &value);
                themPhanTuDauMang(arr, &n, value);
                break;
            case 6:
                int pos;
                printf("Nhap vi tri can xoa: ");
                scanf("%d", &pos);
                xoaPhanTuTaiViTri(arr, &n, pos);
                break;
            case 7:
                sapXepGiamDanInsertionSort(arr, n);
                break;
            case 8:
                int x;
                printf("Nhap gia tri can tim: ");
                scanf("%d", &x);
                int result = binarySearch(arr, n, x);
                if (result != -1) {
                    printf("Gia tri %d co trong mang tai vi tri %d\n", x, result);
                } else {
                    printf("Gia tri %d khong co trong mang\n", x);
                }
                break;
            case 9:
                inSoNguyenToVaBinhPhuong(arr, n);
                break;
            case 10:
                sapXepGiamDanBubbleSort(arr, n);
                break;
            case 11:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
        }
    } while (c != 11);

    return 0;
}
