#include<iostream>
#include<math.h>
using namespace std;
  int main(){
  	int a;
  	cout<<"nhap gia tri bien a: ";
  	cin>>a;
  	int CP;
  	CP= (int) sqrt(a);
  	if(CP*CP == a ){
  		cout<<"Bien a la mot so chinh phuong!";
	  }else{
	  	cout<<"Bien a khong phai la so chinh phuong!";
	  }
	  return 0;
  }
