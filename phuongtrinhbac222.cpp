#include<iostream>
#include<math.h>
 using namespace std;
 int main(){
 	float a,b,c,delta,x1,x2;
 	cout<<"nhap vao so nguyen a= ";
 	cin>>a;
 	cout<<"nhap vao so nguyen b= ";
 	cin>>b;
 	cout<<"nhap vao so nguyen c= ";
 	cin>>c;
 	if(a == 0){
 		cout<<"khong phai la phuong trinh bac 2!"<<endl;
	 }else{
 	delta=(b*b)-(4*a*b);
 	if(delta<0){
 		cout<<"phuong trinh vo nghiem!"<<endl;
	 }else  if(delta == 0){
	 	x1=-b/(2*a);
	 	cout<<"phuong trinh co mot nghiem kep: x1=%.2f"<<endl;
	 }else if(delta > 0 ){
	 	x1=(-b + sqrt((delta))/(2*a));
	 	x2=(-b - sqrt((delta))/(2*a));
	 	cout<<"phuong trinh co hai nghiem phan biet: x1=%.2f, x2=%.2f"<<endl;
	 }
  }
  return 0;
} 
