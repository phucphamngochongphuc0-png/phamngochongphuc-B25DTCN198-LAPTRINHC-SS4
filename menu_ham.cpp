#include<stdio.h>
#include<stdlib.h>
#define MAX 100
//bai 10 ss14
void nhap(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Nhap gia tri cho a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void in(int a[], int n){
	printf("Cac phan tu da nhap: ");
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}
void add_value(int a[], int n, int x, int idx){
	for( int i = n - 1; i >= idx; i--){
		a[i + 1] = a[i];
		
	}
	a[idx] = x;
}
void bubble(int a[], int n){
	
}
int tim_kiem_tuyen_tinh(int a[], int n, int x){
	for(int i = 0; i < n; i++){
		if(a[i] == x)
		return i;
	}
	return -1;
}

int tim_kiem_nhi_phan(int a[], int n, int x){
	int low = 0; 
	int high = n - 1;
	while(low <= high){
		int mid = (high + low)/2;
		if(a[mid] ==  x){
			return mid;
		}else if(x > a[mid]){
			low = mid + 1;
		}else high = mid - 1;
	}
	return -1;
}
int main(){
	int chon;
	char luachon;
	int da_nhap;
	int n, x, idx;
	int a[MAX];
	while(1){

		printf("MENU\n");
		printf("1. Nhap so phan tu can nhap va gia tri tuong ung.\n");
		printf("2. In ra gia tri phan tu dang quan ly.\n");
		printf("3. Them 1 phan tu vao vi tri chi dinh.\n");
		printf("4. Sua 1 phan tu o vi tri chi dinh.\n");
		printf("5. Xoa 1 phan tu ở vi tri chi dinh.\n");
		printf("6. Sap xep cac phan tu.\n");
		printf("7. Tim kiem phan tu nhap vao.\n");
		printf("8. Thoat.\n");
		printf("Nhap lua chon: ");
		scanf("%d", &chon);
		
		switch(chon){
			case 1: 
				da_nhap = 1;
				while(1){
					printf("Nhap so phan tu cho mang: ");
					scanf("%d", &n);
					if( 0 >= n || n > MAX){
						printf("Gia tri khong hop le, nhap lai\n");
					}else break;
				}
				
				
				nhap(a, n);
				printf("===Nhap phan tu thanh cong===\n");
				break;
			case 2:
				if(da_nhap == 0){
					printf("===Vui long chon 1===\n");
					break;
				}
				in(a, n);
				break;
			case 3:
				if(da_nhap == 0){
					printf("===Vui long chon 1===\n");
					break;
				}
				printf("Nhap  phan tu can them: ");
				scanf("%d", &x);
				
				printf("Nhap vi tri can them: ");
				scanf("%d", &idx);
				add_value(a, n, x, idx);
				n++;
				printf("===Nhap phan tu thanh cong, in ra de xem (2.)===\n");
				break;
			case 6: 
				
				break;
			case 7:
				if(da_nhap == 0){
					printf("===Vui long chon 1===\n");
					break;
				}
				while(1){
					printf("A. Tim kiem tuyen tinh.\n");
					printf("B. Tim kiem nhi phan.\n");
					printf("C. Thoat.\n");
					printf("Nhap lua chon: ");
					scanf("%c", &luachon);
					switch(luachon){
						case 'A':
							printf("Nhap phan tu can tim: ");
							scanf("%d", &x);
							tim_kiem_tuyen_tinh(a, n, x);
							
							break;
						case 'B':
							printf("Nhap phan tu can tim: ");
							scanf("%d", &x);
							tim_kiem_nhi_phan(a, n, x);
						case 'C':
							exit(0);	
							break;
						default:
							printf("==Lua chon khong hop le==\n");
					}
				}
				
			case 8:
				printf(".....");
				exit(0);
			default: 
			printf("===Lua chon khong hop le===\n\n");
	}	}
}