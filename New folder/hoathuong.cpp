#include <iostream>
#include <string>
#include <fstream>
#include <ctype.h>
using namespace std;

void inthuong(string &s) {
	
	 ofstream p("inthuong.txt");
	 if(p.is_open()){
	 		 s ="nong VAN duong";
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
    p<<s;
}
p.close();
}

void inhoa(string &s) {
	 	 ofstream p("inthoa.txt");
	 if(p.is_open()){
	 		 s ="nong VAN duong";
    for (int i = 0; i < s.size(); i++) {
        s[i] = toupper(s[i]);
    }
    p<<s;
}
p.close();
}

int main() {
	string s;
    inthuong(s);
    cout <<"Chuoi chu in thuong: "<< s << endl;
    inhoa(s);
    cout <<"Chuoi chu in hoa: "<< s << endl;
    return 0;
}

