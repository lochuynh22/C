#include<stdio.h>

int main(){
    int a=100;
    int *ptr_A=&a;
    printf("gia tri cua bien la: %d\n", a);  
    printf("dia chi cua bien la: %p\n",&a); 
    printf("gia tri cua con tro la: %p\n", *ptr_A); 
    printf("dia chi cua con tro la: %p\n", ptr_A);  
    
    return 0;
}
