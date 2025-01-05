#include <stdio.h>
#include <string.h>


int main() {
    char str[] = "Hello my gmail is test123@gmail.com";
    int count_1 = 0; 
    int count_2 = 0;
    int count_3 = 0;
    for(int i = 0; i < strlen(str); i++) {
        if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) {
            count_1++;
        } else if(str[i] >= '0' && str[i] <= '9') {
            count_2++;
        } else {
            count_3++;
        }
    }
    printf("So lan suat hien chu cai: %d\n", count_1);
    printf("So lan suat hien chu so: %d\n", count_2);
    printf("So lan suat hien ki tu dac biet: %d\n", count_3);
    
    return 0;
}
