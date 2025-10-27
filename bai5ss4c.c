#include<stdio.h>
int main(){
	int chiSoCu, chiSoMoi, daTieuThu;
	long long tong=0, gia=0;
	
	printf("nhap chi so cong to dien cu:");
	
	if(scanf("%d", &chiSoCu)!=1){
		printf("chi so cu khong hop le");
	return 1;
	}
	printf("nhap chi so congto dien moi:");
	if(scanf("%d", &chiSoMoi)!=1){
		printf("chi so moi khong hop le");
	return 1;
	}
	if(chiSoCu<0 || chiSoMoi<0){
		printf("so dien khong the la so am ");
	return 1;
	}
	if(chiSoCu>chiSoMoi){
		printf("chi so moi phai lon hon hoac bang chi so cu");
	return 1;
	}
	daTieuThu=chiSoMoi-chiSoCu;
	if(daTieuThu<50){gia=10000;
	}else if(daTieuThu<100){gia=15000;
	}else if(daTieuThu<150){gia=20000;
	}else if(daTieuThu<200){gia=25000;
	}else{gia=30000;
	}
	tong=(long long)daTieuThu*gia;
	printf("thong tin hoa don");
	printf("so tien tieu thu thang nay: %dkWh\n",daTieuThu);
	printf("gia ap dung: %lld VND/kWh\n", gia);
	printf("tong tien dien phai tra la: %lld VND\n", tong);


	return 0;
}