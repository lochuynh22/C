#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
char students[MAX][6][20];
int n;

int pressAnyKey(){
	char c;
	fflush(stdin);
	printf("\tAn phim bat ky de quay lai menu! \n");
	scanf("%c",&c);	
}
void showListStudents(){
	if(n == 0){
		printf("\t-----------Danh sach trong---------\n");
		return;	
	}
	printf("\t------------------------Danh sach sinh vien--------------------------\n");
	printf("\t+-----+---------------+-----------+-----------+-----+----------+\n");
	printf("\t|%-5s|%-15s|%-11s|%-11s|%-5s|%-10s|\n","ID","Name","Birthday","Phone","Sex","Status");
	printf("\t+-----+---------------+-----------+-----------+-----+----------+\n");
	for(int i =0; i<n;i++){
		printf("\t|%-5s|%-15s|%-11s|%-11s|%-5s|%-10s|\n",students[i][0],students[i][1],students[i][2],students[i][3],students[i][4],students[i][5]);
		printf("\t+-----+---------------+-----------+-----------+-----+----------+\n");	
	}
}
void copyStudent(char stu1[6][20], char stu2[6][20]){
	strcpy(stu1[0], stu2[0]);
	strcpy(stu1[1], stu2[1]);
	strcpy(stu1[2], stu2[2]);
	strcpy(stu1[3], stu2[3]);
	strcpy(stu1[4], stu2[4]);
	strcpy(stu1[5], stu2[5]);
}
//void swapStr(char str1[], char str2[]){
//	char temp[20];
//	strcpy(temp, str1);
//	strcpy(str1, str2);
//	strcpy(str2, temp);
//}
//void swap(char stu1[6][20], char stu2[6][20]){
//	swapStr(stu1[0], stu2[0]);
//	swapStr(stu1[1], stu2[1]);
//	swapStr(stu1[2], stu2[2]);
//	swapStr(stu1[3], stu2[3]);
//	swapStr(stu1[4], stu2[4]);
//	swapStr(stu1[5], stu2[5]);
//}
void addNewStudent(){
	if(n == MAX){
		printf("\tMang day\n");
		return;	
	}
	fflush(stdin);
	printf("\tNhap ma sv : ");
	gets(students[n][0]); 	
	printf("\tNhap ten sv : ");
	gets(students[n][1]); 	
	printf("\tNhap ngay sinh sv : ");
	gets(students[n][2]); 	
	printf("\tNhap so dien thoai sv : ");
	gets(students[n][3]); 	
	printf("\tNhap gioi tinh sv (Nam / Nu) : ");
	gets(students[n][4]); 	
	printf("\tNhap trang thai sv (Dang hoc/Bo hoc): ");
	gets(students[n][5]); 
	n++;		
	
}
void deleteStudent(){ // st1,st2,st3(i = 2),st4,st5,st6
	fflush(stdin);
	printf("\t Nhap id sinh vien can xoa : ");
	char id[20];
	gets(id);
	int isMove = 0;
	for(int i = 0; i< n - 1 ; i++){
		if(strcmp(students[i][0],id)){
			isMove = 1;	
		}
		if(isMove){
			copyStudent(students[i], students[i+1]);	
		}
	}
	n--;	
}
int main(){
	int choice;
	system("color 2");
	while(1){
		printf("\t===============MENU=============\n");
		printf("\t1.Hien thi danh sach sinh vien\n");
		printf("\t2.Them moi sinh vien\n");
		printf("\t3.Chinh sua thong tin sinh vien\n");
		printf("\t4.Xoa sinh vien\n");
		printf("\t5.Thoat\n");
		printf("\t>>>> Moi ban chon chuc nang : ");
		scanf("%d",&choice);
		switch(choice){
			case 1: 
				showListStudents();
				break;
			case 2: 
				addNewStudent();
				break;
				case 4:
					deleteStudent();
					break;
			case 5 :
				exit(0);
				break;
			default	:
				break;	
		
		}
		
		pressAnyKey();
		system("cls");
	}	
	
	
}
