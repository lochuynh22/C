#include <stdio.h>
#include <string.h>

int main() {

    char chuoi[] = "hello world ";
    char ky_tu;
    int dem = 0;

    printf("Nhap vao mot ky tu bat ky: ");
    scanf("%c", &ky_tu);
    for(int i = 0; i < strlen(chuoi); i++) {
        if(chuoi[i] == ky_tu) {
            dem++;
        }
    }
    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", ky_tu, dem);

    return 0;
}
