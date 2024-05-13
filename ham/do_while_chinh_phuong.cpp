#include<iostream>
#include<math.h>
using namespace std;

int chinhphuong(int n){
int s = (int) sqrt(n);
   if(s*s==n){
   	return 1;
   }else{
   	return 0;
   }
}
int main(){
	int i=1;
do{
		int kq=chinhphuong(i);
		if(kq==1){
			cout<<i<<" la so chinh phuong\n";
		}else{
			cout<<i<<" khong la so chinh phuong\n";
		}
		i++;
	}	while(i<=100);
	return 0;
 }
