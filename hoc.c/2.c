#include<stdio.h>
#include<math.h>
int prime(int a){
    if(a<=1) return 0;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
    return 1;
}
int hh(int a){
    int sum=0;
    for(int i=1;i<=sqrt(a);i++){
        if(a%i==0)
            sum+=i;
        if(i!=a/i)
        sum+=a/i;
    }
if (sum - a == a)
return 1;
else
return 0;
}

int main(){
    int so1;
    printf("Nhap 1 so nguyen bat ki:");
    scanf("%d",&so1);
    if(prime(so1)==1)
    printf("La so nguyen to\n ");
    else
    printf("Khong la so nguyen to\n");
    
    if(hh(so1)==1)
    printf("La so hoan hao\n ");
    else
    printf("Khong la so hoan hao\n");

    return 0;
}
