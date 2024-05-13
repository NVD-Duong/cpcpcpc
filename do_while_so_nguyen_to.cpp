#include<iostream>
#include<math.h>
using namespace std;
int nguyento(int n){
	if(n<2)
	return 0;
	if(n==2)
	return 1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
   }
   return 1;
}

int main() {

    cout << "danh sach so nguyen to tu 1 den 100:\n ";
    do {
        if ( nguyento(i))
        cout << i << "\n ";
    } while (i <= 100);
    return 0;
}
