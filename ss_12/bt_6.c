#include<stdio.h>
#include<math.h>
int hh(int a){
    int sum=0;
    for(int i=1;i<=sqrt(a);i++){
        if(a%i==0)
            sum+=i;
        if(i!=a/i)
        sum+=a/i;
    }
if (sum - a == a)
return 1;
else
return 0;
}
int main(){
    int a_1,a_2;
    printf("Nhap vao hai so nguyen bat ki:");
    scanf("%d %d", &a_1, &a_2);
    if(hh(a_1)==1)
    printf("%d la so hoan hao\n", a_1);
    else 
    printf("Ko la so hoan hao\n");
    if(hh(a_2)==1)
    printf("%d la so hoan hao\n", a_2);
    else 
    printf("Ko la so hoan hao\n");

    return 0;
}