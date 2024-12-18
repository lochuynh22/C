#include<stdio.h>
#include<math.h>
int main(){
    int sum,n_1,n_2,n_3,num;
    for(num=100;num<1000;num++)
    {
        n_1=num/100;
        n_2=num/10%10;
        n_3=num%10;
    sum=pow(n_1,3)+pow(n_2,3)+pow(n_3,3);
    if(num==sum){
    printf("%d ", num);
}
    }
    
    return 0;   

}