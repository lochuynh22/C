#include<stdio.h>
#include<math.h>


int main()
{

    const float pi=3.14;
    const int r_tron=5;
    float chuvi= 2*pi*r_tron;
    float dientich=pi*pow(r_tron,2);
    printf("S tron:%.2f\n", dientich);
    printf("P tron: %.2f\n", chuvi);
    return 0;
}