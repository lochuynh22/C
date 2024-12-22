#include <stdio.h>

int main() {
    int arr_1[100], n, val, loca;

    printf("Nhap so phan tu muon them vao mang: ");
    scanf("%d", &n);
    if (n > 100 || n < 1) {
        printf("Gia tri khong hop le\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d vao mang: ", i + 1);
        scanf("%d", &arr_1[i]);
    }

    printf("Nhap phan tu muon them: ");
    scanf("%d", &val);
    printf("Nhap vi tri muon thay doi: ");
    scanf("%d", &loca);

    if (loca < 0 || loca >= 100) {
        printf("Vi tri khong hop le!\n");
    } else {
        if (loca > n) {
            loca = n;
        }
        for (int i = n; i > loca; i--) {
            arr_1[i] = arr_1[i - 1];
        }
        arr_1[loca] = val;
        n++;
    }

    printf("Mang sau khi chen la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr_1[i]);
    }
    printf("\n");

    return 0;
}
