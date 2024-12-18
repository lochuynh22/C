#include<stdio.h>

int main(){
    int n_1, n_2,change;
    do{
    printf("CALCULATOR\n");
    printf("1.Tong hai so\n");
    printf("2.Hieu hai so\n");
    printf("3.Tich hai so\n");
    printf("4.Thuong hai so\n");
    printf("5.Thoat\n");

    printf("Nhap vao 2 so bat ki:\n");
    scanf("%d%d",&n_1, n_2);
    printf("Lua chon cua ban la:");
    scanf("%d", &change);
    }
    while (change==5);
    {
        break;
    }
    
    switch(change)
    {
        case 1:
            printf("Tong hai so la:%d", n_1+n_2);
        case 2:
        do{
            printf("Hieu hai so la:%d",n_1-n_2);  
        }
        while(change==5);
        {
            break;
        }
}
return 0; 
}
