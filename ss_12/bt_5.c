#include<stdio.h>
#include<math.h>

int kiemtrasonguyento(int a){
    if(a<=1) return 0;
    for(int i=2;i<=sqrt(a); i++){
        if(a%i==0) return 0;
    }
    return 1;
}
int main(){
    int so1,so2;
    printf("Nhap so nguyen1:");
    scanf("%d",&so1);
    printf("Nhap so nguyen2:");
    scanf("%d",&so2);
    if(kiemtrasonguyento(so1)){
        printf("%d la so nguyen to\n",so1);
    }
    else
        printf("%d khong la so nguyen to\n",so1);
    if(kiemtrasonguyento(so2)){
        printf("%d la so nguyen to\n",so2);
    }
    else
        printf("%d khong la so nguyen to\n",so2);
    return 0;
}