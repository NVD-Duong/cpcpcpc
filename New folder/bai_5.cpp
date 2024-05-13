#include<iostream>
#include<string.h>
using namespace std;

// Ham noi chuoi
void noichuoi() {
    char str1[20], str2[20];	
    cout << "Nhap chuoi 1: ";
    gets(str1);
    cout << "Nhap chuoi 2: ";
    gets(str2);
    strcat(str1, str2);
    cout << "Xuat chuoi sau khi noi: ";
    puts(str1);
}

// Hàm tim kiem ky tu trong chuoi
void timkitu() {
    char str1[20], h;
    cout << "Nhap chuoi: ";
    gets(str1);
    cout << "Nhap ký tu muon tim kiem: ";
    cin >> h;
    char *p = strchr(str1, h);
    if(p == NULL)
        cout << "khong tim thay!";
    else
        cout << "tim thay vi tri " << (p - str1)<<endl;
}

// Hàm tìm kiem chuoi trong chuoi
void timchuoi() {
    char str1[20], str2[20];	
    cout << "Nhap chuoi 1: ";
    gets(str1);
    cout << "Nhap chuoi 2: ";
    gets(str2);
    char *p = strstr(str1, str2);
    if(p == NULL)
        cout << "khong tim thay!";
    else
        cout << "Tim thay tai vi tri " << (p - str1);
}

// Hàm tính d? dài c?a chu?i
void stringLength() {
    char *ch = "lap trinh c";
    cout << "Ð? dài chu?i: " << strlen(ch);
}

int main() {
   noichuoi();
   timkitu();
    timcchuoi();
    stringLength();
    return 0;
}
