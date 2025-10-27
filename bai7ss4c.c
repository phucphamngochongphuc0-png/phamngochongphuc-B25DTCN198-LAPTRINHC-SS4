#include<stdio.h>
int main(){
	int n;
	
	printf("nhap nam: ");
	scanf("%d",&n);
	
	if((n%4==0 && n%100!=0)||(n%400==0))
	{
		printf("nam %d la nam nhuan", n);
	}
	else
	{
		printf("nam %d khong phai nam nhuan", n);
	}
	
	return 0;
}