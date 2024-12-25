#include <stdio.h>

int kiemtra(int n) {
    if (n < 2) return 0;
    int kt = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            kt = 1;
            break;
        }
    }
    return kt;
}

int main() {
    int n;
    printf("nhap so nguyen duong n: ");
    scanf("%d", &n);

    printf("%d so nguyen to dau tien la: ", n);
    int dem = 0;
    for (int i = 2; dem < n; i++) {
        if (kiemtra(i) == 0) {
            printf("%d ", i);
            dem++;
        }
    }
    return 0;
}
