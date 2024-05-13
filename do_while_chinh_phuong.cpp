#include<iostream>
#include<math.h>
//danh sach cac so chan tu 1 den 100
using namespace std;
int main(){
	int i=1;
	cout<<"danh sach cac so chinh phuong tu 1 den 100:\n";
 do{
 int CP= (int) sqrt(i);
    if(CP*CP==i){
   	cout<<i<<"\n";
	}
	i++;
 }while(i<=100);
	return 0;
}
