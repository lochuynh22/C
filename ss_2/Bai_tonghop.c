#include<stdio.h>
#include<math.h>
int main(){
    float weight, height; 

    printf("Nhap so can nang:");
    scanf("%f", &weight);
    
    printf("Nhap so chieu cao:");
    scanf("%f", &height);
    float BMI= weight/(height*height);
    printf("chi so bmi la:%.2f", BMI);
    return 0;

}