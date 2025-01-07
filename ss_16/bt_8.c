#include <stdio.h>
#include <string.h>

void daoChuoi(char *a, char *b, int size) {
    for (int i = 0; i < size; i++) {
        b[i] = a[size - i - 1];
    }
    b[size] = '\0';
}

int main() {
    char inputString[100];
    char reverseString[100];

    printf("Nhap vao mot chuoi bat ki: ");
    fgets(inputString, 100, stdin);

    inputString[strcspn(inputString, "\n")] = 0;
    printf("Chuoi vua nhap la: %s\n", inputString);
    
    int length = strlen(inputString);
    daoChuoi(inputString, reverseString, length);
    printf("Chuoi dao nguoc la: %s\n", reverseString);

    return 0;
}
