#include<stdio.h>
#include<math.h>


int main()
{

    const float pi=3.14;
    float r;
    printf("Hay nhap ban kinh R cua hinh tron:");
    scanf("%f", &r);
    float chuvi= 2*pi*r;
    float dientich=pi*pow(r,2);
    printf("S tron:%.2f\n", dientich);
    printf("P tron: %.2f\n", chuvi);
    return 0;
}