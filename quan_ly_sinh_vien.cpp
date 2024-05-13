
#include<iostream>
#include<string>
#include<fstream>
#include <algorithm>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
   struct SV{
    string masv;
	string hovaten;
	string ngaysinh;
    string gioitinh;
	string lop;
   };
   //ham tim kiem sinh vien theo gioi tinh
 void ThongTinTheoGioiTinh(SV *ds, int n) {
    string gioiTinh;
    cout << "Nhap gioi tinh sinh vien can tim: ";
    cin >> gioiTinh;
    bool found = false;
    ofstream data("thongtinsinhvientheogioitinh.txt");
    if (data.is_open()) {
        data << "=========== Thong tin sinh vien co gioi tinh " << gioiTinh << " ===========" << endl;
        
        for (int i = 0; i < n; ++i) {
            if(ds[i].gioitinh.find(gioiTinh) != string::npos) {
                cout << " " << ds[i].masv;
                cout << "\t" << ds[i].hovaten;
                cout << "   \t" << ds[i].ngaysinh;
                cout << "\t" << ds[i].gioitinh;
                cout << "\t" << ds[i].lop << endl;
                
                data << " " << ds[i].masv;
                data << "\t" << ds[i].hovaten;
                data << "   \t" << ds[i].ngaysinh;
                data << "\t" << ds[i].gioitinh;
                data << "\t" << ds[i].lop << endl; 
                found = true;
            }
        }
        if (!found) {
            cout << "Khong tim thay sinh vien voi gioi tinh " << gioiTinh << endl;
        }
        
        data.close(); // Đóng file
        
        if (found) {
            cout << "Da xuat thong tin sinh vien co gioi tinh " << gioiTinh << " vao file thongtinsinhvientheogioitinh.txt" << endl;
        }
    } else {
        cout << "Khong the mo file de ghi!" << endl;
    }
}
   //ham in thong tin sinh vien theo thang
  void timKiemTrungThangSinh(SV *ds, int n) {
    string thang;
    cout << "Nhap thang sinh muon tim: ";
    cin >> thang;
    bool found = false;
    
    // Mở file để ghi thông tin
    ofstream data("sinhvientrungthangsinh.txt");
    
    if (data.is_open()) {
        data << "=========== Thong tin sinh vien trung thang sinh " << thang << " ===========" << endl;
        for (int i = 0; i < n; ++i) {
            string thangSinh = ds[i].ngaysinh.substr(3, 2);
            if (thangSinh == thang) {
                
                cout << " " << ds[i].masv;
                cout << "\t" << ds[i].hovaten;
                cout << "   \t" << ds[i].ngaysinh;
                cout << "\t" << ds[i].gioitinh;
                cout << "\t" << ds[i].lop << endl;
                
                data << " " << ds[i].masv;
                data << "\t" << ds[i].hovaten;
                data << "   \t" << ds[i].ngaysinh;
                data << "\t" << ds[i].gioitinh;
                data << "\t" << ds[i].lop << endl; 
                found = true;
            }
        }
       
        data.close();
        
     
        if (!found) {
            cout << "Khong tim thay sinh vien trung thang sinh " << thang << endl;
        } else {
            cout << "Da xuat thong tin sinh vien trung thang sinh " << thang << " vao file sinhvientrungthangsinh.txt" << endl;
        }
    } else {
        cout << "Khong the mo file de ghi!" << endl;
    }
}
  //ham tim kiem thong tin sinh vien theo nam sinh
  void timKiemTrungNamSinh(SV *ds, int n) {
    string nam;
    cout << "Nhap nam sinh muon tim: ";
    cin >> nam;
    bool found = false;
    
    ofstream data("sinhvientrungnamsinh.txt");
    
    if (data.is_open()) {
        data << "=========== Thong tin sinh vien trung nam sinh " << nam << " ===========" << endl;    
        for (int i = 0; i < n; ++i) {
            string namSinh = ds[i].ngaysinh.substr(6, 4);
            if (namSinh == nam) {
                cout << " " << ds[i].masv;
                cout << "\t" << ds[i].hovaten;
                cout << "   \t" << ds[i].ngaysinh;
                cout << "\t" << ds[i].gioitinh;
                cout << "\t" << ds[i].lop << endl;
                
                data << " " << ds[i].masv;
                data << "\t" << ds[i].hovaten;
                data << "   \t" << ds[i].ngaysinh;
                data << "\t" << ds[i].gioitinh;
                data << "\t" << ds[i].lop << endl; 
                found = true;
            }
        }
       
        data.close();
        
        
        if (!found) {
            cout << "Khong tim thay sinh vien trung nam sinh " << nam << endl;
        } else {
            cout << "Da xuat thong tin sinh vien trung nam sinh " << nam << " vao file sinhvientrungnamsinh.txt" << endl;
        }
    } else {
        cout << "Khong the mo file de ghi!" << endl;
    }
}
   //ham tim kiem thong tin sinh vien theo ngay 
    void timKiemTrungNgaySinh(SV *ds, int n) {
    string ngay;
    cout << "Nhap ngay sinh muon tim: ";
    cin >> ngay;
    bool found = false;
    
    ofstream data("sinhvientrungngaysinh.txt");
    
    if (data.is_open()) {
        data << "=========== Thong tin sinh vien trung ngay sinh " << ngay << " ===========" << endl;
        for (int i = 0; i < n; ++i) {
            string ngaySinh = ds[i].ngaysinh.substr(0, 2);
            if (ngaySinh == ngay) {
                
                cout << " " << ds[i].masv;
                cout << "\t" << ds[i].hovaten;
                cout << "   \t" << ds[i].ngaysinh;
                cout << "\t" << ds[i].gioitinh;
                cout << "\t" << ds[i].lop << endl;
                
                data << " " << ds[i].masv;
                data << "\t" << ds[i].hovaten;
                data << "   \t" << ds[i].ngaysinh;
                data << "\t" << ds[i].gioitinh;
                data << "\t" << ds[i].lop << endl; 
                found = true;
            }
        }
       
        data.close();
        

        if (!found) {
            cout << "Khong tim thay sinh vien trung ngay sinh " << ngay << endl;
        } else {
            cout << "Da xuat thong tin sinh vien trung ngay sinh " << ngay << " vao file sinhvientrungngaysinh.txt" << endl;
        }
    } else {
        cout << "Khong the mo file de ghi!" << endl;
    }
}
   //ham in thong tin sinh vien theo lop
void inThongTinLop(SV *ds, int n, const string& lopCanIn) {
    ofstream data("inthongtintheolop.txt");
    if (data.is_open()) {
        	data<<"=============Thong tin danh sach sinh vien:=========="<<endl;
        for (int i = 0; i < n; ++i) {
            if (ds[i].lop == lopCanIn) {
                data << " " << ds[i].masv;
                data << "\t" << ds[i].hovaten;
                data << "   \t" << ds[i].ngaysinh;
                data << "\t" << ds[i].gioitinh ;
                data << "\t" << ds[i].lop << endl;
            }
        }
        data.close();
        cout << "Da xuat thong tin sinh vien lop " << lopCanIn << " vao file inthongtintheolop.txt" << endl;
    } else {
        cout << "Khong the mo file de ghi!" << endl;
    }
}
   //ham so sanh sanh ten sinh vien voi nhau
   bool cmp(const SV &a, const SV &b) {
    // So sanh theo ten
    int compareName = a.hovaten.compare(b.hovaten);
    if (compareName != 0) {
        return compareName < 0; // Sap xep tang dan theo ten
    }
    
    // Neu ten trung nhau, so sanh theo ho va ten dem
    return a.hovaten.compare(b.hovaten) < 0;
}
  void tachHoTen(const string& hoTen, string& ho, string& tenDem, string& ten) {
    size_t posHo = hoTen.find_first_of(" "); // Tim vi tri cua dau cach dau tien (ngan cach giua ho và tên dem)
    size_t posTen = hoTen.find_last_of(" "); // Tìm vi tri cua dau cach cuoi cung (ngan cach giua tên dem và ten)

    if (posHo == string::npos) { // Neu khong tim thay dau cach
        ho = hoTen; // Ho là chuoi hoTen day du
        tenDem = ""; // Khong co ten dem
        ten = ""; // Khong co ten
    } else if (posHo == posTen) { // Neu chua tim thay mot dau cach
        ho = hoTen.substr(0, posHo); // Ho la phan dau cua chuoi hoTen
        tenDem = ""; // Khong co ten dem
        ten = hoTen.substr(posTen + 1); // Ten là phan cuoi cua chuoi hoTen
    } else { // Neu tim thay ca hai dau cach
        ho = hoTen.substr(0, posHo); // Ho la phan dau cua chuoi hoTen
        tenDem = hoTen.substr(posHo + 1, posTen - posHo - 1); // Tên dem la phan nam giua hai dau cach
        ten = hoTen.substr(posTen + 1); // Ten la phan cuoi cua chuoi hoTen
    }
}
 //Ham sap xep danh sach sinh vien theo ten
   void sapxeptheoten(SV *ds, int &n) {
    // Tach ho, tên dem va ten ra tu chuoi ho ten
    for (int i = 0; i < n; ++i) {
        string ho, tenDem, ten;
        tachHoTen(ds[i].hovaten, ho, tenDem, ten);
        ds[i].hovaten = ten;// + " " + ho + " "+ tenDem  ; Gan lai ten thanh tên de sap xep
    }
    // Sap xep danh sach sinh vien theo ten
    sort(ds, ds + n, cmp);
    // In danh sách sinh viên sau khi sap xap
    	cout <<"=============Thong tin danh sach sinh vien:=========="<<endl;
		for (int i=0;i<n;i++){
			
			cout<<" "<<ds[i].masv;
			cout<<"\t"<<ds[i].hovaten;
			cout<<"   \t"<<ds[i].ngaysinh;
			cout<<"\t"<<ds[i].gioitinh;
			cout<<"\t"<<ds[i].lop<<endl;
	     }
	      ofstream data("sapxeptheoten.txt");
    if (data.is_open()) {
        	data<<"=============Thong tin danh sach sinh vien:=========="<<endl;
        for (int i = 0; i < n; ++i) {
            data << " " << ds[i].masv;
			data << "\t" << ds[i].hovaten;
			data << "   \t" << ds[i].ngaysinh;
			data << "\t" << ds[i].gioitinh ;
			data << "\t" << ds[i].lop << endl;
        }
        data.close();
        cout << "Da xuat thong tin sinh vien sau khi sap xep theo ten vao file sapxeptheoten.txt" << endl;
    } else {
        cout << "Khong the mo file de ghi!" << endl;
    }
}
//sap xep sinh vien theo lop
void sapxeptheolop(SV *ds, int n) {
    // Sắp xếp danh sách sinh viên theo lớp
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            // So sánh lớp của hai sinh viên
            if (ds[i].lop > ds[j].lop) {
                // Hoán đổi vị trí của hai sinh viên
                SV temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
    // In danh sách sinh viên sau khi sắp xếp
   	cout<<"=============Thong tin danh sach sinh vien:=========="<<endl;
    for (int i = 0; i < n; ++i) {
        cout << " " << ds[i].masv;
        cout << "\t" << ds[i].hovaten;
        cout << "   \t" << ds[i].ngaysinh;
        cout << "\t" << ds[i].gioitinh;
        cout << "\t" << ds[i].lop << endl;
    }
    // Lưu thông tin đã sắp xếp vào file
    ofstream data("sapxeptheolop.txt");
    if (data.is_open()) {
       	data<<"=============Thong tin danh sach sinh vien:=========="<<endl;
        for (int i = 0; i < n; ++i) {
            data << " " << ds[i].masv;
            data << "\t" << ds[i].hovaten;
            data << "   \t" << ds[i].ngaysinh;
            data << "\t" << ds[i].gioitinh ;
            data << "\t" << ds[i].lop << endl;
        }
        data.close();
        cout << "Da xuat thong tin sinh vien sau khi sap xep theo lop vao file sapxeptheolop.txt" << endl;
    } else {
        cout << "Khong the mo file de ghi!" << endl;
    }
}
//tim kiem ma sinh vien
void timkiemma(SV *ds, int n){
    string ma;
    cout << "Nhap ma sinh vien can tim: ";
    cin >> ma;
    bool found = false;
    ofstream data("timkiemma.txt");
    if (data.is_open()) {
        for(int i = 0; i < n; i++){ // duyệt thông tin mã trong danh sách
            if(ds[i].masv.find(ma) != string::npos){
                cout << " " << ds[i].masv;
                cout << "\t" << ds[i].hovaten;
                cout << "   \t" << ds[i].ngaysinh;
                cout << "\t" << ds[i].gioitinh;
                cout << "\t" << ds[i].lop << endl;
                
                data << " " << ds[i].masv;
                data << "\t" << ds[i].hovaten;
                data << "   \t" << ds[i].ngaysinh;
                data << "\t" << ds[i].gioitinh;
                data << "\t" << ds[i].lop << endl; 
                
                found = true; // Đã tìm thấy mã cần tìm
                break; // Dừng vòng lặp ngay sau khi tìm thấy sinh viên có mã tương ứng
            }
        }
        if (!found)
            cout << "Khong tim thay ma sinh vien vua nhap!\n";
        
        data.close(); // Đóng file
        if (found)
            cout << "Da xuat thong tin sinh vien vao file timkiemma.txt" << endl;
    } else {
        cout << "Khong the mo file de ghi!" << endl;
    }
}
  //ham doc du lieu t file file1.txt va luu vao mang sinh vien
  void docfile(SV *&ds, int &n){
	ifstream data;
	string s;
	int dem = 0;
	data.open("file1.txt");
	//kiem tra file mo thanh cong hay khong
	if (data.is_open()){
		//dem so luong
	while(!data.eof()){
	  getline(data, s);//day con tro van ban xuong dong
	  if(s=="") break;
	  dem++;
     }
     data.close();
    n = dem;
    ds =new SV[n];
            //doc thong tin tung sinh vien
            	data.open("file1.txt");
            	if (data.is_open()){
            		for (int i=0;i<n;i++){
            			getline(data,ds[i].masv,'|');
            			getline(data,ds[i].hovaten,'|');
            	        getline(data,ds[i].ngaysinh,'|');
            	        getline(data,ds[i].gioitinh,'|');
            	        getline(data,ds[i].lop);
					}
            		data.close();
			 }
			}
 	else 
 	cout<<"khong mo duoc file!"<<endl;
} 
  //ham xuat thong tin file 
   void xuatfile(SV *&ds, int &n){
    	cout<<"=============Thong tin danh sach sinh vien:=========="<<endl;
		for (int i=0;i<n;i++){
			cout<<" "<<ds[i].masv;
			cout<<"\t"<<ds[i].hovaten;
			cout<<"   \t"<<ds[i].ngaysinh;
			cout<<"\t"<<ds[i].gioitinh;
			cout<<"\t"<<ds[i].lop<<endl;
	     }
		}
		// ham tim kiem ten sinh vien theo chu cai
   //chuong trinh chinh
int main() {
    SV *list;
    list = new SV[100];
    int n;
    bool in = false;
    int chon;
    while (true) {
        cout << "======================MENU======================" << endl;
        cout << "1. Doc thong tin sinh vien." << endl;
        cout << "2. Xuat thong tin sinh vien." << endl;
        cout << "3. Sap xep sinh vien theo lop." << endl;
        cout << "4. Thong tin ma sinh vien." << endl;
        cout << "5. Thong tin sinh vien theo ten tang dan." << endl;
        cout << "6. Thong tin sinh vien theo lop." << endl;
        cout << "7. Thong tin sinh vien theo ngay sinh." << endl;
        cout << "8. Thong tin sinh vien theo thang sinh." << endl;
        cout << "9. Thong tin sinh vien theo nam sinh." << endl;
        cout << "10. Thong tin sinh vien theo gioi tinh." << endl;
        cout << "11. Thoat chuong trinh." << endl;
        cout << "=======================END======================"<<endl;
        cout << "Chon luu chon muon thuc hien: ";
        cin >> chon;

        switch (chon) {
            case 1:
                docfile(list, n);
                in = true;
                break;
            case 2:
                if (in) {
                    xuatfile(list, n);
                } else {
                    cout << "Voi long doc dư lieu!\n";
                }
                break;
            case 3:
                if (in) {
                    sapxeptheolop(list, n);
                } else {
                    cout << "Voi long doc dư lieu!\n";
                }
                break;
            case 4:
                if (in) {
                    timkiemma(list, n);
                } else {
                    cout << "Voi long doc dư lieu!\n";
                }
                break;
            case 5:
                if (in) {
                    sapxeptheoten(list, n);
                } else {
                    cout << "Voi long doc dư lieu!\n";
                }
                break;
            case 6:
                if (in) {
                    string lopCanIn;
                    cout << "Nhap ten lop muon in: ";
                    cin.ignore(); // Đoc ky tu newline con lai sau khi nhap lua chon truoc do
                    getline(cin, lopCanIn);
                    inThongTinLop(list, n, lopCanIn);
                } else {
                    cout << "Voi long doc du lieuc!\n";
                }
                break;
            case 7:
                if (in) {
                    timKiemTrungNgaySinh(list, n);
                } else {
                    cout << "Voi long doc du lieu!\n";
                }
                break;
                case 8:
    if (in) {
        timKiemTrungThangSinh(list, n);
    } else {
        cout << "Vui long chon doc du lieu tu file truoc!\n";
    }
    break;
    case 9:
     if (in) {
        timKiemTrungNamSinh(list, n);
    } else {
        cout << "Vui long chon doc du lieu tu file truoc!\n";
    }
    break;
           case 10:
    if (in) {
        ThongTinTheoGioiTinh(list, n);
    } else {
        cout << "Vui long chon doc du lieu tu file truoc!\n";
    }
    break;
            case 11:
                cout << "Ban da chon thoat chuong trinh!\n";
                delete[] list;
                list = nullptr;
                return 0;
            default:
                cout << "Luu chon khong hop le. Voi long chon lai!" << endl;
        }
    }
    return 0;
}