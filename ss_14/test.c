#include <stdio.h>
#include <string.h>


void inputString(char str[], int size) {
    printf("Nhap vao mot chuoi: ");
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = 0;
}
int countCharacters(char str[]) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}
int countOccurrences(char str[], char c) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            count++;
        }
    }
    return count;
}
void reverseString(char str[]) {
    int length = countCharacters(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    printf("chuoi sau khi dao nguoc: %s\n", str);
}
void printString(char str[]) {
    printf("%s\n", str);
}


int main() {
    char str[100];
    inputString(str, 100);

    int char_count = countCharacters(str);
    printf("so luong trog chuoi: %d\n", char_count);
    char char_to_count;
    printf("Nhap ki tu can dem: ");
    scanf(" %c", &char_to_count);
    int occurrences = countOccurrences(str, char_to_count);
    printf("so lan xuat hien ki tu  '%c': %d\n", char_to_count, occurrences);

 
    reverseString(str);

    printf("Cchuoi luc dau : ");
    printString(str);

    return 0;
}
