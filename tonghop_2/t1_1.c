#include<stdio.h>
#define MAX 100
int main(){
	int array[MAX]; // khai boa mang co 100 ptu
	int n = 0;
	while(1){
		printf("-----------------Menu-------------------\n");
		printf("1.Nhap mang	\n");
		printf("2.In ra mang\n");
		printf("3.Dem phan tu chan le\n");
		printf("4.Tim gia tri lon thu 2\n");
		printf("5.Them phan tu vao dau mang\n");
		printf("6.Xoa phan tu tai 1 vi tri cu the\n");				
		printf("7.Sap xep mang gian dan insertion\n");
		printf("8.Tim kiem phan tu\n");
		printf("9.In ra cac phan tu l� so nguyen to da binh phuong\n");
		printf("10.Sap xep mang gian dan bubble\n");
		printf("0.Thoat\n");
		int choice;
		printf("Nhap chuc nang  :");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
					printf("Nhap so luong phan tu muon them");
					scanf("%d",&n);
					for(int i = 0; i< n;i++){
						printf("Nhap array[%d] = ",i);
						scanf("%d",array+i);
					}
					printf("Thanh cong");
			break;
			case 2:
				if(n==0){
					printf("Mang rong\n");
				}else{
					for(int i=0;i<n;i++){
						printf("array[%d]=%d, ",i,array[i]);
					}	
				}
				printf("\n");
			break;
			case 3:
				{
					int chan=0,le=0;
					for(int i=0;i<n;i++){
						if(array[i]%2 == 0){
							chan++;
						}else{
							le++;
						}
					}
					printf("So luong so chan la %d, so luong so le la %d \n", chan, le);
				}
			break;
			case 4:
				// tim gia tri lon thu 2
				// khai bao 2 bien max1, max2
				{
					if(n<2){
						printf("ko co gia tri lon thu 2\n");
						break;
					}
					int max1, max2;	
					if(array[0]>array[1]){
						max1 = array[0];
						max2 = array[1];
					}else{
						max1 = array[1];
						max2 = array[0];
					}
					for(int i=2; i<n;i++){
						if(array[i]>max1){
							max2 = max1;
							max1 = array[i];
						}else{
							if(array[i]> max2){
								max2 = array[i];
							}
						}
					}
					printf("SO lon thu 2 trong mang la : %d \n",max2);
				}
			break;
			case 5:
				{
					int value;
					printf("Nhap gia tri can chen ");
					scanf("%d",&value);
					for(int i = n; i>0;i--){
						array[i] = array[i-1];
					}
					array[0] = value;
					n++;
					printf("thanh cong\n");
				}
			break;
			case 6:
				// xoa phan tu
				{
					int indexDel;
					printf("Nhap vi tri can xoa ");
					scanf("%d",&indexDel);
					if(indexDel<0 || indexDel >=n){
						printf("vi tri ko hop le\n");
					}else{
						// giai thuat
						for(int i = indexDel; i< n-1; i++){
							array[i] = array[i+1];
						}
						n--;
						printf("xoa thanh cong\n");
					}
				}
			break;
			case 7:
				// sap xep chen , [7,5,4,2],6
				{
					for(int i = 1 ; i < n; i++){
						int key = array[i];
						int j = i-1;
						while(j>=0 && key > array[j]){ // giam dan
							array[j+1] = array[j];
							j--;
						}
						// can thay doi gia tri v�o vi tri can chen
						array[j+1] = key;
					}
					printf("da sap xep xong\n");
				}
			break;
			case 8:
				// tim kiem tuyen tinh
				{
					int value, check = 1;
					printf("Nhap gia tri can tim ");
					scanf("%d",&value);
					for(int i =0; i<n;i++){
						if(array[i] == value){
							check = 0;
							printf("Tim thay gia tri %d tai vi tri %d \n",value, i);
							break;
						}
					}
					if(check){
						printf("ko tim thay phan tu n�y\n");	
					}
				}
			break;
			case 9:
					{
						int hasPrime= 0;
						for(int i=0;i<n;i++){
							int so = array[i];
							int check = 1;
							if(so<2){
								check= 0; // ko phai
							}else{
								for(int j=2; j * j< so; j++){
									if(so%j==0){
										check = 0; // ko phai
									}	
								}
							}
							if(check){
								hasPrime =1;
								printf("%d ", so*so);
							}
						}
						if(!hasPrime){
							printf("ko co so nguyen to trong mang\n");
						}
							
					}
			break;
			case 10:
				// sap xep noi bot

				for(int i = 0 ; i< n -1; i++ ){
					for(int j = 0; j < n-i-1 ; j++){
						if(array[j] < array[j+1]){
							int temp = array[j];
							array[j]= array[j+1];
							array[j+1] = temp;
						}
					}	
				}
				printf("da sap xep xong\n");
			break;
			case 0:
				
			return 0;
			default:
				printf("Lua chon ko hop le !\n");
				break;
			
		}
	}	

}