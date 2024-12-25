#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sizeofarr = sizeof(arr) / sizeof(int);
    printf("Cac phan tu trong mang: ");
    for(int i = 0; i < sizeofarr; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Do dai cua mang la: %d\n", sizeofarr);
    printf("%d",arr[1]);

    return 0;
}
