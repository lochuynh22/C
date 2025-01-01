#include <stdio.h>

int main() {

    char chuoi[] = "hello world!";
    
    for(int i = 0; chuoi[i] != '\0'; i++) {
        printf("%c ", chuoi[i]);
    }
    
    return 0;
}
 