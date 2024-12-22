#include<stdio.h>


int main(){
    int fib_1=0,fib_2=1,fib_nxt,n;
    printf("Nhap mot so nguyen n bat ki:");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        if(i==1){
            printf("%d ", fib_1);
        }
        else if(i==2){
            printf("%d ", fib_2);
        }
        else{
            fib_nxt=fib_1+fib_2;
            printf("%d ",fib_nxt);
            fib_1=fib_2;
            fib_2=fib_nxt;
        }


    }
    return 0;
}

//c= a-1 +b-2;
