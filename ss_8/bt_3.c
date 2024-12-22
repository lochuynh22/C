#include <stdio.h>
//#include <st>
//
//K?t h?p ki?n th?c t? c�c b�i tru?c, x�y d?ng chuong tr�nh hi?n th? v� th?c hi?n c�c ch?c nang theo menu sau:
//
//MENU
//
//        Nh?p v�o m?ng
//        Hi?n th? m?ng
//        Th�m ph?n t?
//        S?a ph?n t?
//        X�a ph?n t?
//        Tho�t
//        L?a ch?n c?a b?n:


int main(void) {
    const int MAX_SIZE = 5; // t?i da 100 ph?n t?
    int arrayInt[MAX_SIZE]; // khai b�o m?ng 100 ph?n t?
    int size = 0; // k�ch thu?c th?c t? m� n� luu tr?
    // thi?t k? chuong tr�nh theo d? b�i
    while (1) {
        printf("==============MENU================\n");
        printf("1. Nhap phan tu cho mang\n");
        printf("2. HIen thi mang\n");
        printf("3. Them moi phan tu vao mang\n");
        printf("4. Sua gia tri \n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        int choice;
        printf("Hay nhap lua chon :");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // nh?p gi� tr? cho m?ng
                int n ;
                printf("Hay nhap so luong phan tu mang :");
                scanf("%d", &n);
                if (n <=0 || n> MAX_SIZE){
                    printf("Gia tri nhap vao ko hop le");
                    break;
                }
                // nhap l?n lut t?ng ph?n t?
                for (int i = 0; i < n; ++i) {
                    printf("Nhap Array[%d] = ",i+1);
                    scanf("%d", arrayInt+i);
                }
                size = n; // c?p nh?t l?i k�ch thu?c c?a m?ng
                break;
            case 2:
                // hi?n th? mang
                if(size == 0){
                    printf("mang rong \n");
                    break;
                }
                printf("Cac phan tu trong mang la : \n");
                for (int i = 0; i < size; ++i) {
                    printf("%d ",arrayInt[i]);
                }
                printf("\n");
                break;
            case 3:
                // th�m m?i
                // c?n v? tri v� gi� tr? c?n th�m
                if(size == MAX_SIZE){
                    printf("Mang da day, ko them them nua\n");
                    break;
                }
                int addIndex, valueInput;
                printf("Hay nhap vao gia tri can them:");
                scanf("%d", &valueInput);
                printf("Hay nhap vi tri can them:");
                scanf("%d", &addIndex);

                // 100,1,2,3,100,4,5,100
                // x�t c�c tuu?ng ho?p c?a add index
                if(addIndex < 0){
                    addIndex = 0;
                } else if(addIndex > size){
                    addIndex = size;
                }

                // ch�n gia tri vao vi tri index
                // 1 2 3 4 5
                // 1 2 100 3 4 5
                // 2 2 3 4 5
                for(int i = size-1 ; i >= addIndex ; --i){
                    arrayInt[i+1] = arrayInt[i];
                }

                arrayInt[addIndex] = valueInput;
                size++;
                printf("Da them moi thanh cong \n");
                break;
            case 4:
                // s?a
                int editIndex, newValue;
                printf("Hay nhap vi tri can sua:");
                scanf("%d", &editIndex);

                if(editIndex <0 || editIndex > size - 1){
                    printf("vi tri can xoa ko hop le \n");
                } else{
                    // 1,2,3,4,5 : index =2 - value =100
                    printf("Hay nhap vao gia tri moi [gia tri cu = %d]:",arrayInt[editIndex]);
                    scanf("%d", &newValue);
                    arrayInt[editIndex] = newValue;
                    printf("Da cap nhat gia tri \n");
                }

                break;
            case 5:
                // x�a
                // nhap index c� x�a
                int deleteIndex;
                printf("Hay nhap vi tri can xoa:");
                scanf("%d", &deleteIndex);
                if(deleteIndex <0 || deleteIndex > size - 1){
                    printf("vi tri can xoa ko hop le \n");
                } else{
                    // 1,2,3,4,5
                    for (int i = deleteIndex; i < size-1; ++i) {
                        arrayInt[i] = arrayInt[i+1];
                    }
                    size--;// giam kich thuoc mang 1 son vi
                    printf("Da them moi thanh cong \n");
                }
                break;
            case 6:
                break;
            default:
                printf("Lua chon ko hop le : vui l�ng nh?p t? 1 -6\n");
        }
        if (choice ==6){
            printf("Thoat chuong trinh");
            break;
        }
    }

    return 0;
}

