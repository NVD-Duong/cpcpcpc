#include<iostream>
//danh sach cac so chan tu 1 den 100
using namespace std;
int main(){
	int i=1;
	cout<<"danh sach cac so chan tu 1 den 100:\n";
 do{
    if(i%2==0)
 	cout<<i<<"\n";
 	i++;
 }while(i<=100);
	return 0;
}
