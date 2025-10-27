#include<stdio.h>
int main(){
	int n;
	if(scanf("%d",&n) !=1){
	printf("loi ki tu");
	return 1;
	}

	if(n<0){
		printf("so am"); 
	
	}else if(n>0){
		printf("so duong");

	}else{
		printf("so 0");}
	
	return 0;
}