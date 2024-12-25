#include <stdio.h>

void giaiThua(int x) {
    int factorial = 1;  
    for (int i = 1; i <= x; i++) {
        factorial *= i;  
    }
    printf("Giai thua cua %d la %d\n", x, factorial);
}

int main() {
    int a =5;
    giaiThua(a);
    return 0;
}
