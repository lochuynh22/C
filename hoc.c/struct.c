#include<stdio.h>

struct feature(
    char camera;
    char man_hinh;
    char hieu_nang;
    char luu_tru;
    char pin;
);
int main(){
    struct DienThoai dt1 ={"camera 1080p, quay vd 2k", 
    "man hinh ips, face_id",
    "Chip xu li cac tac vu, ram8gb",
    "dung luong 128gb",
    "pin 20000mb, sac nahnh 99w, sac khong day"};
    printf("Tinh nang cua dien thoai:");
    printf("1.%s:",dt1.camera);
    printf("2.%s:",dt1.hieu_nang);
    printf("3.%s:",dt1.luu_tru);
    printf("4.%s:", dt1.pin);
}