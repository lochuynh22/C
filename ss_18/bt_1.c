#include <stdio.h>
#include <string.h>

//khaibao
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    //khaibao&khoitao
    struct Student student1;
    //gangtri
    strcpy(student1.name, "huynh loc");
    student1.age = 19;
    strcpy(student1.phoneNumber, "09999999");
    //in
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Phone Number: %s\n", student1.phoneNumber);

    return 0;
}
