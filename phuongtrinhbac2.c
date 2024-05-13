#include<stdio.h>
#include<math.h>
 void main(){
 	float a,b,c,delta,x1,x2;
 	printf("nhap vao so nguyen a= ");
 	scanf("%f",&a);
 	printf("nhap vao so nguyen b= ");
 	scanf("%f",&b);
 	printf("nhap vao so nguyen c= ");
 	scanf("%f",&c);
 	if(a == 0){
 		printf("khong phai la phuong trinh bac 2!");
	 }else{
 	delta=(b*b)-(4*a*b);
 	if(delta<0){
 		printf("phuong trinh vo nghiem!");
	 }else  if(delta == 0){
	 	x1=-b/(2*a);
	 	printf("phuong trinh co mot nghiem kep: x1=%.2f",x1);
	 }else if(delta > 0 ){
	 	x1=(-b + sqrt((delta))/(2*a));
	 	x2=(-b - sqrt((delta))/(2*a));
	 	printf("phuong trinh co hai nghiem phan biet: x1=%.2f, x2=%.2f",x1,x2);
	 }
  }
} 
