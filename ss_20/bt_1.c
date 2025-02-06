#include<stdio.h>

int main(){
//bt1
    FILE *f;
    f= fopen("bt01.txt","w");
    if(f==NULL){
        printf("Cannot open file!!\n");
        return 1;
    }
    fprintf(f,"%s\n", "loc huynh");
    fprintf(f,"%s\n", "bt z");
    fclose(f);
//bt2
    f=fopen("bt01.txt","r");
    if(f==NULL){
        printf("Cannot open file!!\n");
        return 1;
    }
    char c;
    for(int i=0;i<3;i++){
        c=fgetc(f);
        if(c==EOF){
            break;
        }
        printf("%c",c);
    }
    fclose(f);
//bt3
    f= fopen("bt01.txt","a");
    if(f==NULL){
        printf("Cannot open file!!\n");
        return 1;
    }
    char string[100];
    printf("\nNhap mot chuoi bat ki vao file :");
    fflush(stdin);
    fgets(string,sizeof(string),stdin);
    printf("%s", string);
    fputs(string,f);
    fclose(f);
//bt 4
    f= fopen("bt01.txt","r");
    if(f==NULL){
        printf("Cannot open file!!\n");
        return 1;
    }
    char line[100];
    if (fgets(line, sizeof(line),f)!=NULL) {
        printf("dong dau dien: %s", line);
    } else {
        printf("ko co dong de doc.\n");
    }
    fclose(f);
    return 0;
}