#include<stdio.h>


int main()
{
    int num, dem=0;
    printf("Nhap 1 so nguyen duong:");
    scanf("%d", &num);
    if(num>=2){
        for(int i=1;i<=num;i++){
            if(num%i==0){
                dem+=1;
            }
        }
        if(dem==2){
            printf("%d la so nguyen to\n", num);
            }
        else{
            printf("%d ko la so nguyen to\n", num);
            }

    }
    else{
        printf("%d khong la so nguyen to", num);
    }

    return 0;
}

