#include <stdio.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phonenum[15];
};

int main() {

    struct Student stu1[50];

    for (int i = 0; i < 5; i++) {
        stu1[i].id = i + 1; //id tang tu 1
        printf("Nhap tt sv thu %d:\n", stu1[i].id);
        printf("ten:");
        fgets(stu1[i].name, sizeof(stu1[i].name), stdin);
        printf("tuoi");
        scanf("%d", &stu1[i].age);
        getchar(); 
        printf("so dien thoai:");
        fgets(stu1[i].phonenum, sizeof(stu1[i].phonenum), stdin);
    }


    printf("\nthong tinsv:\n");
    for (int i = 0; i < 5; i++) {
        printf("sinh vien thu  %d:\n", stu1[i].id);
        printf("ten: %s", stu1[i].name);
        printf("tuoi: %d\n", stu1[i].age);
        printf("so dien thoai: %s", stu1[i].phonenum);
    }
    return 0;
}
