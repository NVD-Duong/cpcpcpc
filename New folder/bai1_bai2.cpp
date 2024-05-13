#include <iostream>
#include <math.h>

using namespace std;

// ham kiem tra so nguyen to
int nguyento(int n){
	if(n < 2)	return 0;
	if(n == 2) return 1;
	int s=(int) sqrt(n);
		for(int i = 2;i <= s; i++)
		{
        if(n % i == 0) return 0;
       }
   	    return 1;
   }
// ham kiem tra so chinh phuong
int chinhphuong(int n){
int s = (int) sqrt(n);
   if(s * s == n){
   	return 1;
   }else{
   	return 0;
   }
}

// ham kiem tra so hoan hao
int hoanhao(int n) {
    if (n <= 1)
        return 1;
    int Tong = 1;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            Tong += i;
            if (i * i != n)
                Tong += n / i;
        }
    }
    return Tong == n;
}

// ham kiem tra so chan
int sochan(int n) {
  if( n % 2 == 0){
  	return 1;
  	}else{
  		return 0;
	  }
}

// ham kiem tra so le
int sole(int n) {
  if( n % 2 != 0){
  	return 1;
  	}else{
  		return 0;
	  }
}

//ham tim uoc chung lon nhat
int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

//ham tim boi chung nho nhat
int BCNN(int a, int b) {
    int max1 = max(a, b);
    int min1 = min(a, b);
    int tam = max1;

    while (true) {
        if (tam % min1 == 0) {
            return tam;
        }
        tam += max1;
    }
}

int main() {
    int n;
    cout << "Nhap mot so nguyen duong: ";
    cin >> n;
    int so1, so2;
    cout<<"nhap vao so 1: ";
    cin>>so1;
    cout<<"nhap vao so 2: ";
    cin>>so2;

    if (nguyento(n)){
        cout << n << " la so nguyen to!" << endl;
    }else{
        cout << n << " khong phai la so nguyen to!" << endl;
        }
    if (chinhphuong(n)){
        cout << n << " la so chinh phuong!" << endl;
    }else{
        cout << n << " khong phai la so chinh phuong!" << endl;
     }
    if (hoanhao(n)){
        cout << n << " la so hoan hao!" << endl;
    }else{
        cout << n << " khong phai la so hoan hao!" << endl;
     }
    if (sochan(n)){
        cout << n << " la so chan!" << endl;
    }else{
        cout << n << " khong phai la so chan!" << endl;
    }
    if (sole(n)){
        cout << n << " la so le!" << endl;
    }else{
        cout << n << " khong phai la so le!" << endl;
    }
    cout<<"Uoc chung lon nhat cua " << so1 << " va " << so2 << " la: "<<UCLN(so1,so2)<<endl;
    cout<<"Boi chung nho nhat cua " << so1 << " va " << so2 << " la: "<<BCNN(so1,so2)<<endl;
    return 0;
}
