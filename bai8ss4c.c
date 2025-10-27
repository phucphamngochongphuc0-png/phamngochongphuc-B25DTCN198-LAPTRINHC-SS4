#include<stdio.h>
int main(){
	int a,b,c;

		scanf("%d%d%d",&a,&b,&c);
	if(a>0 && b>0 && c>0 && a+b>c && c+b>a && a+c>b){
		printf(" la 3 canh tam giac");
	}else{printf("khong phai 3 canh tam giac");
	
	}
	return 0;
}