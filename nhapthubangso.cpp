#include<iostream>
#include<math.h>
using namespace std;
  int main(){
  	int thu;
  	cout<<"nhap gia tri thu: ";
  	cin>>thu;
  	switch(thu){
  case 2:cout<<"morday";
  break;
   case 3:cout<<"Tuesday";
  break;
  case 4:cout<<"Wenesday";
  break;
   case 5:cout<<"Thurday";
  break;
  case 6:cout<<"Friday";
  break;
  case 7:cout<<"Satturday";
  break;
  case 8:cout<<"sunday";
  break;
  default:cout<<"ban vua nhap khong phai la thu!";
}
  return 0;
  }
