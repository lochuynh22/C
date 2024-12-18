#include<stdio.h>

int main(){
    int n, sum=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        sum+=i;
    printf("Tong cac so la %d\n", sum);
    for(int i=1;i<=n;i++)
        printf("%d ",i);
    return 0;
}
