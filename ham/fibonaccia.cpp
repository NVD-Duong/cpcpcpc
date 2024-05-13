#include<iostream>
using namespace std;
int fibonacci(int n)
{
	if (n<=1)
	{
		return 1 ;
		return fibonacci (n-1) + fibonacci (n-2);
	}
}
int main(){
int n;
std::cout<"Nhap so luong so fionacci muon hien thi :";
std::cin>>n;
std::cout<<"Cac so fibonacci dau tien la:\n";
for (int i=0;i<n;i++)
{
	std::cout<<fibonacci(i)<<" ";
}
return 0;
}
