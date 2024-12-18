#include<stdio.h>

int main(){
    int n_1, n_2, n_3, n_4, n_5, sum_l=0,sum_c=0;
    printf("Nhap 5 so nguyen bat ki");
    scanf("%d%d%d%d%d", &n_1,&n_2,&n_3,&n_4,&n_5);
    if(n_1%2!=0){
        sum_l+=n_1;
    }
    else 
        sum_c+=1;
     if(n_4%2!=0){
        sum_l+=1;
    }
    else 
        sum_c+=1;
     if(n_2%2!=0){
        sum_l+=1;
    }
    else 
        sum_c+=1;
     if(n_3%2!=0){
        sum_l+=1;
    }
    else 
        sum_c+=1;
     if(n_5%2!=0){
        sum_l+=1;
    }
    else 
        sum_c+=1;
    printf("tong cac so le la %d\n",sum_l);
    printf("tong cac so chan la %d",sum_c);
    return 0;
}