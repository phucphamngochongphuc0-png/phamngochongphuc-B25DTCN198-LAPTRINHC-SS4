//bài 9 ss4
#include<stdio.h>
int laNamNhuan(int nam){
	if((nam %4==0 && nam%100!=0)||(nam%400==0)){
		return 1;
	}else{return 0;
	}
}
int main(){
	int ngay,thang,nam;
	int soNgayToiDa=0;
	
	printf("nhap ngay: ");
	scanf("%d",&ngay);
	printf("nhap thang: ");
	scanf("%d",&thang);
	printf("nhap nam: ");
	scanf("%d",&nam);
	
	if(thang <1||thang>12){
		printf("ngay thang nam khong hop le");
	return 0;
	}
	if(thang==1||thang==3||thang==5||thang==7||thang == 8 || thang == 10 || thang == 12){
	soNgayToiDa=31;
	}else if(thang == 4 || thang == 6 || thang == 9 || thang == 11){
	soNgayToiDa=30;
	}else{if(laNamNhuan(nam)==1){soNgayToiDa=29;
	}else{soNgayToiDa=28;
	}
	
	printf("ngay thang nam hop le\n");
	
	}
	
	
	
	
}