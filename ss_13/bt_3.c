#include <stdio.h>
#include<math.h>
int prime(int a){
    if(a<=1) return 0;
    for(int i=2;i<=sqrt(a); i++){
        if(a%i==0) return 0;
    }
    return 1;
}


void nhapmang(int arr_1[][100], int row, int col) {
    printf("Lan luot nhap cac gia tri cua mang:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("arr_1[%d][%d] = ", i, j);
            scanf("%d", &arr_1[i][j]);
        }
    }
}
void inmatran(int arr_1[][100],int row_1,int col_1){
    for(int i=0;i<row_1;i++){
        for (int j=0;j<col_1;j++){
            printf("%d ", arr_1[i][j]);
        }
        printf("\n");
    }
}
/*goc ma tran
i==0 && j==0||i==0 && j==col_1-1||i ==row_1-1 && j==0||i==row_1-1&&j==col_1-1*/


void ingocmatran(int arr_1[][100],int row_1,int col_1){
    for(int i=0;i<row_1;i++){
        for (int j=0;j<col_1;j++){
            if(i==0 && j==0 || i==0 && j==col_1-1 || i ==row_1-1 && j==0|| i==row_1-1 && j==col_1-1)
            printf("%d",arr_1[i][j]);
            else 
            printf(" ");
        }
        printf("\n");
    }
}
/*bien ma tran
i==0||i==row_1-1||j==0||j==col_1-1*/
void inbienmatran(int arr_1[][100],int row_1,int col_1){
    for(int i=0;i<row_1;i++){
        for (int j=0;j<col_1;j++){
            if(i==0||i==row_1-1||j==0||j==col_1-1)
            printf("%d ",arr_1[i][j]);
            else 
            printf("  ");
        }
        printf("\n");
    }
}
/*cheo chinh
i>=j && i<=j
cheo phu 
j-i-1
*/

void incheochinhphu(int arr_1[][100],int row_1,int col_1){
    float check=(row_1+col_1)/2;
    for(int i=0;i<row_1;i++){
        for (int j=0;j<col_1;j++){
            if(i>=j && i<=j || j==check-i-1)
            printf("%d ",arr_1[i][j]);
            else 
            printf("  ");
        }
        printf("\n");
    }
}


int main() {
    int row, col, arr_1[100][100], c;

    do {
        printf("====menu====\n");
        printf("1. Nhap gia tri cua mang\n");
        printf("2. In theo ma tran\n");
        printf("3. In phan tu o goc\n");
        printf("4. In phan tu o duong bien\n");
        printf("5. In cac phan tu o cheo chinh va cheo phu\n");
        printf("6. In cac so nguyen to tren ma tran\n");
        printf("7. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &c);

        switch (c) {
            case 1:
                printf("Nhap so hang va so cot cua mang: ");
                scanf("%d %d", &row, &col);
                nhapmang(arr_1, row, col);
                break;
            case 2:
                inmatran( arr_1, row, col);
                break;
            case 3:
                ingocmatran( arr_1, row, col);
                break;
            case 4:
                inbienmatran( arr_1, row, col);
                break;
            case 5:
                incheochinhphu( arr_1, row, col);
                break;
            case 6:
                for(int i=0;i<row;i++){
                    for (int j=0;j<col;j++){
                        if(prime(arr_1[i][j])==1)
                            printf("%d ", arr_1[i][j]);
                        
                        else
                        printf(" ");
                    }
                    printf("\n");
                }
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
        }
    } while (c != 7);

    return 0;
}
