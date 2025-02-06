#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50
// struct Sinh viên
struct Student{
	int id;
	char name[25];
	int age;
};
// ham doi cho 2 struct
void swap(struct Student *s1,struct Student *s2){
	struct Student temp = *s1;
	*s1 = *s2;
	*s2 = temp;	
}
// tim kiem nhi phan
void binarySearch(struct Student *arr, int n, char *value ){
	int start = 0, end = n-1, mid;
	
	while(start<= end){
		mid = start +(end- start)/2;
		int compare = strcmp((arr+mid)->name, value); // so sanh  =  ?? tim kiem tuong doi
		if(compare ==0){
		// tim thay
			printf("Tim thay gia tri %s trong danh sach \n", value);
			return;		
		}else if(compare < 0){
			// ben phai
			// cap nhat lai start
			start = mid+1;	
		}else{
			// ben trai
			end = mid -1;
		}
	}
	// ko tìm thay
		printf("ko tim thay gia tri %s trong danh sach \n", value);		
}
int main(){
	// tao 5 sinh vien mau
	int  n = 5;
	struct Student s1 = {1,"Do Hoang Son 1", 18};
	struct Student s2 = {2,"Do Hoang Son 2", 18};
	struct Student s3 = {3,"Do Hoang Son 3", 19};
	struct Student s4 = {4,"Do Hoang Son 4", 19};
	struct Student s5 = {5,"Do Hoang Son 5", 18};
	// khai báo mang
	struct Student studentList[MAX] = {s1,s2,s3,s4,s5};
	// sap xep theo tieu chi : id, name, age 
	// lua chon thuat toán : bubblesort(noi bot)
//	for(int i = 0; i< n-1 ; i++){
//		for(int j = 0; j <n-i-1; j++){
//			// so sanh j  và j+1 : tieu chi so sanh: id , chieu so sanh : giam dan
//			if(studentList[j].age > studentList[j+1].age){
//// 			so sanh 2 chuoi dung string compare : strcmp()
////			if(strcmp(studentList[j].name, studentList[j+1].name)<0){
//				swap(&studentList[j],&studentList[j+1]);
////				struct Student temp = studentList[j];
////				studentList[j] = studentList[j+1];
////				studentList[j+1] = temp;
//			}else if(studentList[j].age == studentList[j+1].age) {
//				if(strcmp(studentList[j].name, studentList[j+1].name)<0){
//					swap(&studentList[j],&studentList[j+1]);
//				}
//			}
//		}	
//	}
//	
	
	
	// kiem tra
	for(int i=0; i<n; i++){
		printf("%d-%s-%d  ,", studentList[i].id,studentList[i].name,studentList[i].age);	
		
	}
	
	// phan tich bang 
	// id : 3, name : 25 : tuoi : 3
	// in tieu de cot 
	printf("\n");
	printf("+---+-------------------------+--------+\n"); // d??ng bien tren
	printf("|%3s|%-25s|%8s|\n","ID", "Name","Age");
	printf("+---+-------------------------+--------+\n");
	// in noi dung 
	for(int i = 0; i< n; i++){
		printf("|%3d|%-25s|%3d tuoi|\n",studentList[i].id, studentList[i].name,studentList[i].age);
		printf("+---+-------------------------+--------+\n");
	}
	
//	// tim kiem nhi phan
//	binarySearch(studentList,n,"Do Hoang");
	

	return 0;
	}