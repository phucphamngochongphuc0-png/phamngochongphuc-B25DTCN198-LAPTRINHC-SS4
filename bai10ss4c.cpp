#include<stdio.h>
int main(){
int a,b,c, temp;
printf("a:");
scanf("%d", &a);

printf("b:");
scanf("%d", &b);

printf("c:");
scanf("%d", &c);

if(a>b){
	temp=a;
	a=b;
	temp=b;
}
if(a>c){
	temp=a;
	a=c;
	temp=c;
}
if(b>c){
	temp=b;
	b=c;
	c=temp;
	printf("thu tu tang dan: %d %d %d", a,b,c);
}	

	
	return 0;
}