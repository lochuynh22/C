#include <stdio.h>
#include <string.h>

int main() {

    char chuoi[] = "hello world !";
    

    int do_dai = strlen(chuoi);
    

    printf("Chuoi dao nguoc: ");
    for(int i = do_dai - 1; i >= 0; i--) {
        printf("%c", chuoi[i]);
    }
    
    return 0;
}
