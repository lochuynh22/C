#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,x1,x2,den_ta=0;
    printf("Hay nhap gia tri cua a,b,c:");
    scanf("%f%f%f",&a, &b, &c);
    den_ta=(b*b)-4*(a*c);
    if(den_ta<0)
        printf("Phuong trinh vo nghiem");
    else if(den_ta==0){
        printf("phuong trinh 2 nghiem kep :");
        x1=x2=-b/(2*a);
        printf("x1=x2=%f", x1);
    }
    else if(den_ta>0){
        printf("phuong trinh 2 nghiem phan biet :");
        x1=(-b + sqrt(den_ta)) / (2*a);
        x2=(-b - sqrt(den_ta)) / (2*a);
        printf("x1=%.2f, x2=%.2f", x1, x2);
    }
    return 0;
}