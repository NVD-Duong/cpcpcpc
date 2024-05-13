#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);

    int vitri;
    cout << "Nhap vi tri can cat tu: ";
    cin >> vitri;

    if (vitri >= 0 && vitri < str.length()) {
        string substring = str.substr(vitri);
        cout << "Chuoi sau vi tri " << vitri << ": " << substring << endl;

        string chuoi_tim_kiem;
        cout << "Nhap chuoi can tim: ";
        cin.ignore();
        getline(cin, chuoi_tim_kiem);
        
        size_t vi_tri_trai = str.find(chuoi_tim_kiem, vitri);
        if (vi_tri_trai != string::npos) {
            cout << "Chuoi duoc tim thay tu vi tri ben trai: " << vi_tri_trai << endl;
        } else {
            cout << "Khong tim thay chuoi ben trai!" << endl;
        }
        size_t vi_tri_phai = str.rfind(chuoi_tim_kiem, vitri);
        if (vi_tri_phai != string::npos) {
            cout << "Chuoi duoc tim thay tu vi tri ben phai: " << vi_tri_phai << endl;
        } else {
            cout << "Khong tim thay chuoi ben phai!" << endl;
        }
    } else {
        cout << "Vi tri khong hop le!" << endl;
    }

    return 0;
}

