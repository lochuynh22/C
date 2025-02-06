#include <stdio.h>
//(Bubble Sort)so sanh tung cap phan tu lien tiep nhau 
int main() {
    int arr_1[] = {5, 3, 9, 3, 10, 1};
    int n = sizeof(arr_1) / sizeof(int);

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr_1[j] > arr_1[j+1]) {
                int temp = arr_1[j];
                arr_1[j] = arr_1[j+1];
                arr_1[j+1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr_1[i]);
    }
    printf("\n");

    return 0;
}
