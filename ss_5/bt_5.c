#include<stdio.h>

int main(){
    int n=1;
    while(n<10){
    for(int i=1;i<=10;i++)
        printf("%d * %d = %d \n", n, i, i*n );
        n++;
    }
    return 0;
}