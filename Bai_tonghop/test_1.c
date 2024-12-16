#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float denta=b*b-4*a*c;
    if(denta<0){
        printf("pt vo nghiem");
    }
    else if(denta>0)
        printf("pt co hai nghiem");
    return 0;
}