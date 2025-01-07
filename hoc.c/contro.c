#include<stdio.h>
void changeA(int *a){
//	a = 100;
//	a++;
	*a = 100;
	(*a)++;
}
// ham chen gia tri theo vi tri
void insertByIndex(int *arr, int *size,int value,int index){
	for(int i = *size - 1; i>= index ; i--){
		*(arr+i+1)= *(arr+i);
	}
	
	*(arr+index) = value;
	(*size)++;
};

// Ham main() l� ham bat dau chuong trinh
int main(){
	int array[100] = {1,2,3,4,5};
	int size = 5;
	
	// thuc hien them m�i 1 gia tri v�o vi tri bat ki trong mang 
	printf("Truoc khi chen : \n");
	for(int i =0; i< size; i++){
		printf("%d\t", *(array+i));
	}
	insertByIndex(array, &size, 10, 2);
	printf("\nSau khi chenc : \n");
	for(int i =0; i< size; i++){
		printf("%d\t", *(array+i));
	}
	// cu phap con tro : *(dereference) v� &(reference)
	// c� phap khai b�o 
	int *ptr; // khai b�o 1 con tro int
	int a = 10;
//	a = 100;
//	a++;
	ptr = &a;
	changeA(ptr);
	
	// khai b�o 1 con tro luu tru dia chi cua 1 con tro khac
	int **ptr2;
	ptr2 = &ptr;
	
	// kiem tra
	printf("Dia chi cua bien a la %p\n", &a);
	printf("Gia tri cua bien a la %d\n", a);
	printf("Con tro dang luu tru dia chi : %p\n", ptr);
	printf("Dia chi cua bien con tro ptr : %p\n", &ptr);
	printf("Gia tri cua o nho ma con tro dang tham chieu toi : %d\n", *ptr);
	printf("Con tro Ptr2 dang luu tru dia chi : %p\n", ptr2);
	printf("Dia chi cua bien con tro ptr2 : %p\n", &ptr2);
	printf("Gia tri cua bien a thong qua con tro ptr2 : %d\n", **ptr2);
	
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


// khai bao cac ham dung trong chuong trinh 
void inputArray(int *ptr, int size);
int sumArray(int *ptr, int size);
int findMax(int *ptr, int size);
void reverseString(char *str); 

int main(int argc, char *argv[]) {
//	int *arr; // con tro NULL
//	int n =0;
//	printf("Nhap kich thuoc mang : ");
//	scanf("%d", &n);
//	arr = (int *) malloc(n * sizeof(int)); // cap phat ban dau
//	inputArray(arr, n);
//	
//	// in ra ket qua 
//	printf("%d", n);
//	for(int i = 0; i < n; i++){
//		printf("%d\t", *(arr+i));
//	}
//	int sum =  sumArray(arr,n);
//	int max = findMax(arr, n);
//	printf("\nTong = %d  vaf max = %d\n",sum,max) ;
//	free(arr);

	char str[] = "Rikkei academy";
	reverseString(str);
	
	printf("%s", str);
	return 0;
}
// trien khai ham
void inputArray(int *ptr, int size){
	// nhap kich thuoc 
	
//	// cap phat dong 
//	ptr = (int *)malloc((*size)*sizeof(int));
	// nhap du lieu cho tung phan tu 
	for(int i =0; i < size; i++){
		printf("arr[%d] = ",i);
		scanf("%d", ptr+i);
	}
	// thu hoi
//	free(ptr);
};
int sumArray(int *ptr, int size){
	int sum = 0;
	for(int i =0; i < size; i++){
		sum+= *(ptr+i);
	}
	return sum;	
};
int findMax(int *ptr, int size){
	int max = *ptr;
	for(int i = 1; i < size; i++){
		if(max < *(ptr+i)){
			max = *(ptr+i);
		}
	}
	return max;	
};
void reverseString(char *str){
	strrev(str);
}; 