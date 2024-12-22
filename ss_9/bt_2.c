#include <stdio.h>

int main() {
    int arr_1[5] = {2, 8, 2, 1, 6};
    int df, loca;

    printf("Nhap vao gia tri va vi tri can sua: ");
    scanf("%d %d", &df, &loca);
    if (loca < 0 || loca >= 5) {
        printf("Vi tri khong hop le.\n");
        return 1;
    }
    arr_1[loca] = df;
    printf("Mang sau khi sua la: ");
    for (int i = 0; i < 5; i++) {  
        printf("%d ",arr_1[i]);
    }
    printf("\n");

    return 0;
}
