#include<stdio.h>
void main(){
	int a;
	printf("nhap vao so nguyen a: ");
	scanf("%d",&a);
	if(a % 2!= 0){
		printf("la so nguyen duong!",a);
	}else{
		printf("khong phai la so nguyen duong!",a);
	}
	return 0;
}
	
