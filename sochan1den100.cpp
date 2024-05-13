#include<iostream>
#include<math.h>
using namespace std;

int main() {
	cout<<"danh sach so chan tu 1 den 100:\n";
    for(int i = 1; i <= 100; i++) {
        if(i % 2 == 0) {
            cout << "so chan: " <<i<<endl ;
        }
    }
    cout<<"danh sach so le tu 1 den 100: ";
    for(int j = 1; j <= 100; j++) {
        if(j % 2 != 0) {
            cout << "so le:" <<j<<endl;
        }
    }
    return 0;
}

