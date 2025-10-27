#include<stdio.h>
int main(){
	int n;
	if(scanf("%d",&n)!=1){printf("loi ky tu");
	return 1;
	}
	if((n %3==0) && (n %5==0)){printf("so vua nhap chia het cho 3 va 5");
	}else if(n %5==0){
		printf("so vua nhap chia het cho 5");
	}else if(n %3==0){
		printf("so vua nhap chia het cho 3");
	}else{
		printf("so khong chia het cho 3 va 5");
	}
	
	return 0;
}