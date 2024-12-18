#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int count = 0;
    printf("Cac phan tu la so chan trong mang: ");
    for (int i = 0; i < 5; ++i) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            count++;
        }
    }
    if (count == 0) {
        printf("Mang khong chua so chan");
    }
    printf("\n");

    return 0;
}
