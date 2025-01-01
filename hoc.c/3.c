#include <stdio.h>

void nhapmang(int n, int arr_1[]) {
    for (int i = 0; i < n; i++) {
        printf("arr_1[%d] = ", i);
        scanf("%d", &arr_1[i]);
    }
}

void inmang(int currentLength, int arr_1[]) {
    printf("Cac gia tri phan tu dang quan li:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("arr_1[%d] = %d\n", i, arr_1[i]);
    }
}

void themphantu(int *currentLength, int addIndex, int value, int arr_1[]) {
    if (addIndex < 0 || addIndex >= 100) {
        printf("Vi tri khong hop le!\n");
    } else {
        if (addIndex >= *currentLength) {
            arr_1[addIndex] = value;
            *currentLength = addIndex + 1;
        } else {
            for (int i = *currentLength; i > addIndex; i--) {
                arr_1[i] = arr_1[i - 1];
            }
            arr_1[addIndex] = value;
            (*currentLength)++;
        }
    }
}

int main() {
    int arr_1[100], n, currentLength, addIndex, value;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    nhapmang(n, arr_1);
    currentLength = n;

    int c;
    do {
        printf("==menu==\n");
        printf("1. Nhap so phan tu va gia tri cua mang\n");
        printf("2. In gia tri cac phan tu\n");
        printf("3. Them phan tu vao mot vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &c);

        switch (c) {
            case 1:
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &n);
                nhapmang(n, arr_1);
                currentLength = n;
                break;
            case 2:
                inmang(currentLength, arr_1);
                break;
            case 3:
                printf("Nhap vi tri muon them vao mang: ");
                scanf("%d", &addIndex);
                printf("Nhap gia tri them: ");
                scanf("%d", &value);
                themphantu(&currentLength, addIndex, value, arr_1);
                inmang(currentLength, arr_1);
                break;
            default:
                if (c != 8) {
                    printf("Lua chon khong hop le. Vui long chon lai.\n");
                }
                break;
        }
    } while (c != 8);

    return 0;
}
