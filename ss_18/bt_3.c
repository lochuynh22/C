#include <stdio.h>

//khaibaocautruc
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    // Khaibao
    struct Student stu1[5];

    for (int i = 0; i < 5; i++) {
        printf("Nhap tt sv thu %d:\n", i + 1);
        printf(" ten: ");
        fgets(stu1[i].name, sizeof(stu1[i].name), stdin);
        printf(" tuoi: ");
        scanf("%d", &stu1[i].age);
        getchar();
        printf("  so dien thoai: ");
        fgets(stu1[i].phoneNumber, sizeof(stu1[i].phoneNumber), stdin);
    }

    printf("\nInf_stud:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("  ten: %s", stu1[i].name);
        printf("  tuoi: %d\n", stu1[i].age);
        printf("  so dien thoai: %s", stu1[i].phoneNumber);
    }

    return 0;
}
