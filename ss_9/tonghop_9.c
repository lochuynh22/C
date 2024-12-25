#include <stdio.h>

// Hàm để nhập các phần tử của mảng
void nhapMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Hàm để hiển thị các phần tử của mảng
void hienThiMang(int arr[], int n) {
    printf("Cac gia tri cua mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Hàm để thêm phần tử vào mảng
void themPhanTu(int arr[], int *n, int val, int pos) {
    if (pos < 0 || pos > *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    (*n)++;
}

// Hàm để sửa phần tử trong mảng
void suaPhanTu(int arr[], int n, int val, int pos) {
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    arr[pos] = val;
}

// Hàm để xóa phần tử trong mảng
void xoaPhanTu(int arr[], int *n, int pos) {
    if (pos < 0 || pos >= *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

int main() {
    int n, c, val, pos;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];

    nhapMang(arr, n);

    do {
        printf("==MENU==\n");
        printf("1. Hien thi mang\n");
        printf("2. Them phan tu\n");
        printf("3. Sua phan tu\n");
        printf("4. Xoa phan tu\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &c);

        switch (c) {
            case 1:
                hienThiMang(arr, n);
                break;
            case 2:
                printf("Nhap gia tri can them: ");
                scanf("%d", &val);
                printf("Nhap vi tri can them: ");
                scanf("%d", &pos);
                themPhanTu(arr, &n, val, pos);
                break;
            case 3:
                printf("Nhap gia tri moi: ");
                scanf("%d", &val);
                printf("Nhap vi tri can sua: ");
                scanf("%d", &pos);
                suaPhanTu(arr, n, val, pos);
                break;
            case 4:
                printf("Nhap vi tri can xoa: ");
                scanf("%d", &pos);
                xoaPhanTu(arr, &n, pos);
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
    } while (c != 5);

    return 0;
}
