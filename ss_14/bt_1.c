#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];
    
    printf("Nhap mot chuoi bat ki: ");
    gets(chuoi);

    printf("Chuoi vua nhap: %s\n", chuoi);

    int do_dai = strlen(chuoi);
    printf("Do dai cua chuoi: %d\n", do_dai);

    return 0;
}
