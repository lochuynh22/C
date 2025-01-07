#include<stdio.h>
void hoanDoi(int *a, int *b){
    int tmp =*a;
    *a=*b;
    *b=tmp;
}
int main(){
    int a=100;
    int b=200;
    hoanDoi(&a,&b);
    printf("%d %d",a,b);
    
    return 0;
}
