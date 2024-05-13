#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout<<"nhap vao so nguyen n: ";
	cin>>n;
	if(n<2){
		return 0;
	for(int i=2;n<=sqrt(n);i++){
	{
		if(n%i==0){
			cout<<"n la so nguyn to!";
		}else{
			cout<<"khong phai la so nguyen to!";
		}
		return 0;
	}
	}
}
