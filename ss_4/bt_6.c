#include<stdio.h>

int main(){
    int a,b,numkw, bill;
        printf("Nhap vao chi so cu(chi so dien o dau thang)");
        scanf("%d", &a);
        printf("Nhap vao chi so moi(chi so dien o cuoi thang)");
        scanf("%d", &b);
        numkw= b-a;
    if(0<= numkw && numkw<50){
        bill=numkw*10000;
    }
    else if(50<= numkw && numkw<100){
        bill=50*10000+(numkw-50)*150000;
    }
    else if(100<= numkw && numkw<150){
        bill=50*10000+50*15000+(numkw-100)*20000;
    }
    else if(150<= numkw && numkw<200){
        bill=50*10000+50*15000+50*20000+(numkw-150)*25000;
    }
    else{
        bill=50*10000+50*15000+50*20000+50+25000+(numkw-200)*30000;
    }
    printf(" so tien dien la: %d", bill);
    return 0;
}