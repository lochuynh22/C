#include<stdio.h>

int main(){
    int n;
    printf("Nhap mot so nguyen duong tu 1-10:\n");
    scanf("%d",&n);
    for(int i=0; i<=10; i++)
    printf("%d * %d = %d \n", n, i, i*n );
    return 0;
}