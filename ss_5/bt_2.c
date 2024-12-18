#include<stdio.h>

int main(){
    int n, i=3;
    do{
    printf("Nhap mot so bat ki tu 1-10:");
    scanf("%d", &n);
    }
    while (!(i==n));
    {
        printf("correct");
    }
    
    return 0;        
}