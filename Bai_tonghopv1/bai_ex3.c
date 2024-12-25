#include<stdio.h>

int main(){
    int change;
    float money, money_1=0;
    printf("==============CHUONG TRINH CHUYEN DOI TIEN TE=============\n");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");
    printf("Nhap don vi tien te can chuyen doi  (1-8) ?\n");
    scanf("%d", &change);
    printf("Nhap so tien doi:");
    scanf("%f", &money);
    
    switch (change)
    {
    case 1:
        money_1=money*23.500;
    printf("%.2f USD =%.2fVNd",money,money_1);
        break;
    case 2:
        money_1=money*25.000;
    printf("%.2f EUR =%.2fVNd",money,money_1);
        break;
    case 3:
        money_1=money* 28.000;
     printf("%.2f GBP =%.2fVNd",money,money_1);
        break;
    case 4:
        money_1=money*180;
    printf("%.2f JPY =%.2fVNd",money,money_1);
        break;
    case 5:
        money_1=money / 23.500;
    printf("%.2f VND =%.2fUSD",money,money_1);
        break;
    case 6:
        money_1=money/ 25.000;
    printf("%.2f VND =%.2fEUR",money,money_1);
        break;
    case 7:
        money_1=money/ 28.000;
    printf("%.2f VND =%.2fGBP",money,money_1);
        break;
    case 8:
        money_1=money/180;
    printf("%.2f VND =%.2fJPY",money,money_1);
        break;
    default:
    printf("Vui long chon tu 1-8");
        break;

    }
    return 0;
}
