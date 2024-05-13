#include <iostream>
#include <cmath>
using namespace std;
// Hàm de quy tinh so Fibonacci
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

// ham de quy tinh  giai thua
int giaithua(int n) {
    if (n == 0)
        return 1;
    else
        return n * giaithua(n-1);
}

// ham de quy tim uoc chung lon nhat
int ucln(int a, int b) {
    if (b == 0)
        return a;
    else
        return ucln(b, a % b);
}

// ham de quy tinh boi chung nho nhat
int bcnn(int a, int b) {
    return (a * b) / ucln(a, b);
}

// ham de quy tinh tong n so tu nhien dau tien
int Tong(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n, so1, so2;
    cout << "Nhap vao so nguyen duong: ";
    cin >> n;
    cout << "Fibonacci cua " << n << " la: " << fibonacci(n) << endl;
    cout << "Giai thua cua " << n << " la: " << giaithua(n) << endl;
    cout << "Tong cua " << n << " so tu nhien dau tien la: " <<Tong(n) << endl;
    cout << "Nhap vao so nguyen duong 1: ";
    cin >> so1;
    cout << "Nhap vao so nguyen duong 2: ";
    cin >> so2;
    cout << "Uoc chung lon nhat cua " << so1 << " va " << so2 << " la: " << ucln(so1, so2) << endl;
    cout << "Boi chung nho nhat cua " << so1 << " va " << so2 << " la: " << bcnn(so1, so2) << endl;
    return 0;
}

