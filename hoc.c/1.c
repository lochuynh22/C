#include<stdio.h>
void kiemtrachanle(int n){
    if(n % 2 ==0)
    printf("%d la so chan\n",n);
    else
    printf("%d la so le\n",n);
    
}
int main(){
    
    int a=13;
    kiemtrachanle(a);
    return 0;
}
