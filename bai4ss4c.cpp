#include<stdio.h>
int main(){
	int thang;

	printf("nhap thang (1-12):");
	if(scanf("%d", &thang)!=1){printf("khong hop le.");
	return 1;
	}
	if(thang <1 || thang >12){
		printf("thang khong hop le.");
	}else if(thang == 2){
		printf("thang %d co 28 hoac 29 ngay.", thang);
	}else if(thang ==4||thang ==6||thang ==9||thang ==11){
		printf("thang %d co 30 ngay.", thang);
	}else{
		printf("thang %d co 31 ngay.", thang);
	}

return 0;
}