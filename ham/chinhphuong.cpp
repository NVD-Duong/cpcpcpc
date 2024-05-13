#include<iostream>
#include<math.h>
using namespace std;

//int chinhphuong(int n){
//int s = (int) sqrt(n);
//   if(s*s==n){
//   	return 1;
//   }else{
//   	return 0;
//   }
//}
//int main(){
//	for(int i=1;i<=100;i++){
//		int kq=chinhphuong(i);
//		if(kq==1){
//			cout<<i<<" la so chinh phuong\n";
//		}else{
//			cout<<i<<" khong la so chinh phuong\n";
//		}
//	}
// }
int sochan(int n){
	return n % 2== 0;
	}
	int main(){
		int a;
		cout<<"nhap n:";
		cin>>a;
		if(sochan(a))
		cout<<a<<"dung"<<endl;
		else 
		cout<<a<<"sai"<<endl;
		return 0;
		}
