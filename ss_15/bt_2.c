#include <stdio.h>
#include <stdbool.h>

void checK_1(char *str) {
    bool word = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            word = false;
        } else if (!word) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 'a' + 'A';
            }
            word = true;
        }
    }
}

int main() {
    char str[] = "hello world";
    checK_1(str);
    printf("%s\n", str); 

    return 0;
}
