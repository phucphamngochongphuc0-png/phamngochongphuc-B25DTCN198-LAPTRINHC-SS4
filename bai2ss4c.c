#include <stdio.h>
int main(){
	int n;
	if(scanf("%d", &n) !=1){
		printf("loi ky tu");
		return 1;
	}
	if(n %2 ==0){printf("so chan");
	}else{printf("so le");
	
	}
	return 0;	
}