#include <stdio.h>

//khaibao
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {

    struct Student stu1;

    //yeucaunhap
    printf("Name: ");
    fgets(stu1.name, sizeof(stu1.name), stdin);
    printf("Age: ");
    scanf("%d", &stu1.age);
    getchar();//dockitu\n
    printf("phoneNum: ");
    fgets(stu1.phoneNumber, sizeof(stu1.phoneNumber), stdin);

    printf("\ninfor stu:\n");
    printf("name: %s", stu1.name);
    printf("age: %d\n", stu1.age);
    printf("phonenum: %s", stu1.phoneNumber);

    return 0;
}
