#include <stdio.h>

int main(){
	int chiSoCu,chiSoMoi,soDienTieuThu;
	double tongTien=0;
		printf("nhap chi so cong to dien cu");
	if(scanf("%d",&chiSoCu)!=1){printf("chi so cu khong hop le");
	return 1;
 }
	
		printf("nhap chi so cong to dien moi");
	if(scanf("%d",&chiSoMoi)!=1){printf("chi so cu khong hop le");
	return 1;
 }
 if(chiSoMoi<chiSoCu){printf("loi: chi so cong to dien moi phai lon hon hoac bang chi so cu");
	return 1;
 }
 soDienTieuThu=chiSoMoi - chiSoCu;
 
 int dienConLai=soDienTieuThu;
 
  
 if(dienConLai>0){
 	int soDienBac1=(dienConLai<50)? dienConLai:50; 
 	tongTien= tongTien+ soDienBac1 *10000.0; 
 	dienConLai= dienConLai-soDienBac1;
 }
 if (dienConLai > 0) {
        int soDienBac2 = (dienConLai < 50) ? dienConLai : 50;
        tongTien =tongTien+ soDienBac2 * 15000.0;
        dienConLai = dienConLai-soDienBac2;
    }
if (dienConLai > 0) {
        int soDienBac3 = (dienConLai < 50) ? dienConLai : 50;
        tongTien =tongTien+ soDienBac3 * 20000.0;
        dienConLai =dienConLai- soDienBac3;
    }
if (dienConLai > 0) {
        int soDienBac4 = (dienConLai < 50) ? dienConLai : 50;
        tongTien =tongTien+ soDienBac4 * 25000.0;
        dienConLai =dienConLai- soDienBac4;
	}
if (dienConLai > 0) {
       tongTien= tongTien +dienConLai*30000.0;
	}	
	printf("tong tien dien phai tra la:%.0f VND", tongTien); 
}
	
	
	
	
	
	
	
	
	
	

