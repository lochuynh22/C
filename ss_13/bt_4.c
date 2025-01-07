#include <stdio.h>

void nhapmang(int n, int arr_1[]) {
    for (int i = 0; i < n; i++) {
        printf("arr_1[%d] = ", i);
        scanf("%d", &arr_1[i]);
    }
}

void inmang(int n, int arr_1[]) {
    printf("Cac gia tri phan tu dang quan li:\n");
    for (int i = 0; i < n; i++) {
        printf("arr_1[%d] = %d\n", i, arr_1[i]);
    }
}

int themmang(int n, int loca, int value, int arr_1[]) {
    if (loca < 0 || loca >= 100) {
        printf("Vi tri khong hop le!\n");
    } else {
        if (loca > n) {
            loca = n;
        }
        for (int i = n; i > loca; i--) {
            arr_1[i] = arr_1[i - 1];
        }
        arr_1[loca] = value;
        n++;
    }
    return n;
}

int suamang(int n, int loca, int value, int arr_1[]){
    if (loca < 0 || loca >= 5) {
        printf("Vi tri khong hop le.\n");
        return 0;
    }
    arr_1[loca] = value;
    return n;
}
int xoaphantu(int n, int loca, int value, int arr_1[]){

    if (loca < 0 || loca >= 5) {
        printf("Vi tri khong hop le.\n");}
        return 0;
}
int main() {
    int arr_1[100], n, c, loca, value;

    do {
        printf("==menu==\n");
        printf("1. Nhap so phan tu va gia tri cua mang\n");
        printf("2. In gia tri cac phan tu\n");
        printf("3. Them phan tu vao mot vi tri chi dinh\n");
        printf("4. Sua mot phan tu o vi tri chi dinh\n");
        printf("5. Xoa mot phan tu o mot vi tri chi dinh\n");
        printf("6. Sap xep cac phan tu\n");
        printf("7. Tim kiem phan tu nhap vao\n");
        printf("8. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &c);
        switch (c) {
            case 1:
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &n);
                nhapmang(n, arr_1);
                break;
            case 2:
                inmang(n, arr_1);
                break;
            case 3:
                printf("Nhap vi tri muon them vao mang: ");
                scanf("%d", &loca);
                printf("Nhap gia tri them: ");
                scanf("%d", &value);
                n = themmang(n, loca, value, arr_1); 
                printf("Mang sau khi chen: ");
                inmang(n, arr_1);
                break;
            case 4:
                printf("Nhap vi tri muon sua trong mang: ");
                scanf("%d", &loca);
                printf("Nhap gia tri sua: ");
                scanf("%d", &value);
                n = suamang(n, loca, value, arr_1); 
                printf("Mang sau khi sua: ");
                inmang(n, arr_1);
                break;
            case 5:
                printf("Nhap vi tri can xoa:");
                scanf("%d", &loca);
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
