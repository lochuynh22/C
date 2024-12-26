#include<stdio.h>
int ucln(int a, int b){
    if(a==0||b==0)
    return a + b;
    while(a!=b){
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    return a;
}

int main(){
    int so1,so2;
    printf("Nhap hai so nguyen bat ki:");
    scanf("%d %d", &so1, &so2);
    printf("uoc chung lon nhat cua hai so la:%d",ucln(so1,so2));
    
    return 0;
}