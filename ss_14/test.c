#include <stdio.h>
#include <string.h>

void if_1(int id){
    if(id == 1)
        printf("Nhap id: ");
    else if(id == 2)
        printf("Nhap ten: ");
    else if(id == 3)
        printf("Nhap date of birth: ");
    else if(id == 4)
        printf("Nhap sdt: ");
    else if(id == 5)
        printf("Nhap gioi tinh: ");
    else if(id == 6)
        printf("Nhap status: ");
}
void if_2(int id){
    if(id == 1)
        printf(" id: ");
    else if(id == 2)
        printf(" ten: ");
    else if(id == 3)
        printf(" date of birth: ");
    else if(id == 4)
        printf(" sdt: ");
    else if(id == 5)
        printf(" gioi tinh: ");
    else if(id == 6)
        printf(" status: ");
}

void themSv(char ifst_2[100][6][20], int count){
    for(int i = 1; i <= 6; i++){
        if_1(i);
        scanf("%s", ifst_2[count][i - 1]);
    }
}



int main(){
    char ifst_2[100][6][20]; 
    int choice;
    int count = 0;
    do {
        printf("1. Hien thi danh sach sinh vien\n");
        printf("2. Them moi sinh vien\n");
        printf("3. Chinh sua theo id\n");
        printf("4. Xoa sinh vien theo id\n");
        printf("5. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                if(count == 0)
                    printf("Chua co sinh vien trong danh sach\n");
                else {
                    printf("Thong tin sinh vien:\n");
                    for(int i = 0; i < count; i++){
                        for(int j = 1; j <= 6; j++){
                            if_2(j);
                            printf("%s\n", ifst_2[i][j - 1]);
                        }
                    }
                }
                break;
            case 2:
                themSv(ifst_2, count);
                count++;
                break;
            case 3:
                
                break;
            case 4:
                
                break;
            default:
                printf("Lua chon khong hop le\n");
        }
    } while(choice != 5);

    return 0;
}
